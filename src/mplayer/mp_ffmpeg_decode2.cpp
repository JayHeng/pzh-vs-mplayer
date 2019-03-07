#include <stdio.h>
#include "mp_ffmpeg_decode.h"
#include "mp_ffmpeg_decode2.h"

#define __STDC_CONSTANT_MACROS
extern "C"
{
#include "libavformat/avformat.h"
#include "libavcodec/avcodec.h"
#include "libavutil/avutil.h"
#include "libswresample/swresample.h"
};

#pragma comment(lib, "avformat.lib")
#pragma comment(lib, "avcodec.lib")
#pragma comment(lib, "avutil.lib")
#pragma comment(lib, "swresample.lib")

// 1 second of 48khz 32bit(4Byte) audio
#define MAX_AUDIO_FRAME_SIZE 192000

int ffmpeg_do_decode2(mp_decoder_format_t mediaFormat, char *mediaFileIn, char *videoFileOut, char *audioFileOut)
{
	FILE *fp_pcm = fopen(audioFileOut, "wb+");
	if (fp_pcm == NULL)
	{
		printf("FILE open error");
		return -1;
	}

	av_register_all();
	AVFormatContext	*pInFmtCtx = NULL;
	if (avformat_open_input(&pInFmtCtx, mediaFileIn, NULL, NULL) != 0)
	{
		printf("Couldn't open an input stream.\n");
		return -1;
	}
	if (avformat_find_stream_info(pInFmtCtx, NULL) < 0)
	{
		printf("Couldn't find stream information.\n");
		return -1;
	}
	int audioStream = -1;
	for (int i = 0; i < pInFmtCtx->nb_streams; i++)
	{
		if (pInFmtCtx->streams[i]->codec->codec_type == AVMEDIA_TYPE_AUDIO)
		{
			audioStream = i;
			break;
		}
	}
	if (audioStream == -1)
	{
		printf("Couldn't find a audio stream.\n");
		return -1;
	}

	AVCodecContext *pInCodecCtx_audio = pInFmtCtx->streams[audioStream]->codec;
	AVCodec *pInCodec_audio = avcodec_find_decoder(pInCodecCtx_audio->codec_id);
	if (pInCodec_audio == NULL)
	{
		printf("Codec not found.\n");
		return -1;
	}
	if (avcodec_open2(pInCodecCtx_audio, pInCodec_audio, NULL) < 0)
	{
		printf("Could not open codec.\n");
		return -1;
	}

	AVFrame *pAudioFrame = av_frame_alloc();
	if (pAudioFrame == NULL)
	{
		printf("Could not alloc AVFrame\n");
		return -1;
	}

	// Set out audio format
	uint64_t out_channel_layout = AV_CH_LAYOUT_STEREO;
	AVSampleFormat out_sample_fmt = AV_SAMPLE_FMT_S16;
	int out_nb_samples = pInCodecCtx_audio->frame_size;
	int out_sample_rate = pInCodecCtx_audio->sample_rate;
	int out_nb_channels = av_get_channel_layout_nb_channels(out_channel_layout);
	int out_buffer_size = av_samples_get_buffer_size(NULL, out_nb_channels, out_nb_samples, out_sample_fmt, 1);
	uint8_t *out_buffer = (uint8_t *)av_malloc(MAX_AUDIO_FRAME_SIZE);
	// Start to use FFmpeg swresample 
	struct SwrContext *pAudioConvCtx = swr_alloc();
	if (pAudioConvCtx == NULL)
	{
		printf("Could not allocate SwrContext\n");
		return -1;
	}
	swr_alloc_set_opts(pAudioConvCtx,
		               // converted audio format
		               out_channel_layout,
		               out_sample_fmt,
		               out_sample_rate,
		               // original audio format
		               pInCodecCtx_audio->channel_layout,
		               pInCodecCtx_audio->sample_fmt,
		               pInCodecCtx_audio->sample_rate,
		               0,
		               NULL);
	swr_init(pAudioConvCtx);

	AVPacket packet;
	while (av_read_frame(pInFmtCtx, &packet) >= 0)
	{
		if (packet.stream_index == audioStream)
		{
			int	out_size;
			if (avcodec_decode_audio4(pInCodecCtx_audio, pAudioFrame, &out_size, &packet) < 0)
			{
				printf("Error in decoding audio frame.\n");
				return -1;
			}
			if (out_size)
			{
				// Convert audio format
				swr_convert(pAudioConvCtx, &out_buffer, MAX_AUDIO_FRAME_SIZE, (const uint8_t **)pAudioFrame->data, pAudioFrame->nb_samples);
				// Write PCM data in file
				fwrite(out_buffer, 1, out_buffer_size, fp_pcm);
			}
		}
		av_free_packet(&packet);
	}

	fclose(fp_pcm);
	swr_free(&pAudioConvCtx);
	av_free(out_buffer);
	av_frame_free(&pAudioFrame);
	avcodec_close(pInCodecCtx_audio);
	avformat_close_input(&pInFmtCtx);

	return 0;
}
