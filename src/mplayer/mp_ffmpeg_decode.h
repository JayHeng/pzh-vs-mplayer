#include <stdio.h>

typedef enum _mp_decoder_format
{
	kMpDecoderFormat_H264 = 0U,
	kMpDecoderFormat_HEVC = 1U,
	kMpDecoderFormat_MPEG2 = 2U,
} mp_decoder_format_t;

int ffmpeg_do_decode(mp_decoder_format_t, char *, char *);
