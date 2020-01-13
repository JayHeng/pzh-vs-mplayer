#include <stdio.h>

typedef enum _mp_encoder_format
{
	kMpEncoderFormat_H264 = 0U,
	kMpEncoderFormat_HEVC = 1U,
} mp_encoder_format_t;

int ffmpeg_do_encode(mp_encoder_format_t, char *, char *);
