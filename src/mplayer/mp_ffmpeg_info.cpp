#include <stdio.h>

#define __STDC_CONSTANT_MACROS
extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libavfilter/avfilter.h"
};


//FIX
struct URLProtocol;
/**
* Protocol Support Information
*/
char * ffmpeg_urlprotocol_info() {

	char *info = (char *)malloc(40000);
	memset(info, 0, 40000);

	av_register_all();

	struct URLProtocol *pup = NULL;
	//Input
	struct URLProtocol **p_temp = &pup;
	avio_enum_protocols((void **)p_temp, 0);
	while ((*p_temp) != NULL) {
		sprintf(info, "%s[In ][%10s]\n", info, avio_enum_protocols((void **)p_temp, 0));
	}
	pup = NULL;
	//Output
	avio_enum_protocols((void **)p_temp, 1);
	while ((*p_temp) != NULL) {
		sprintf(info, "%s[Out][%10s]\n", info, avio_enum_protocols((void **)p_temp, 1));
	}

	return info;
}

/**
* AVFormat Support Information
*/
char * ffmpeg_avformat_info() {

	char *info = (char *)malloc(40000);
	memset(info, 0, 40000);

	av_register_all();

	AVInputFormat *if_temp = av_iformat_next(NULL);
	AVOutputFormat *of_temp = av_oformat_next(NULL);
	//Input
	while (if_temp != NULL) {
		sprintf(info, "%s[In ] %10s\n", info, if_temp->name);
		if_temp = if_temp->next;
	}
	//Output
	while (of_temp != NULL) {
		sprintf(info, "%s[Out] %10s\n", info, of_temp->name);
		of_temp = of_temp->next;
	}
	return info;
}

/**
* AVCodec Support Information
*/
char * ffmpeg_avcodec_info()
{
	char *info = (char *)malloc(40000);
	memset(info, 0, 40000);

	av_register_all();

	AVCodec *c_temp = av_codec_next(NULL);

	while (c_temp != NULL) {
		if (c_temp->decode != NULL) {
			sprintf(info, "%s[Dec]", info);
		}
		else {
			sprintf(info, "%s[Enc]", info);
		}
		switch (c_temp->type) {
		case AVMEDIA_TYPE_VIDEO:
			sprintf(info, "%s[Video]", info);
			break;
		case AVMEDIA_TYPE_AUDIO:
			sprintf(info, "%s[Audio]", info);
			break;
		default:
			sprintf(info, "%s[Other]", info);
			break;
		}

		sprintf(info, "%s %10s\n", info, c_temp->name);

		c_temp = c_temp->next;
	}
	return info;
}

/**
* AVFilter Support Information
*/
char * ffmpeg_avfilter_info()
{
	char *info = (char *)malloc(40000);
	memset(info, 0, 40000);

	avfilter_register_all();

	AVFilter *f_temp = (AVFilter *)avfilter_next(NULL);

	while (f_temp != NULL) {
		sprintf(info, "%s[%15s]\n", info, f_temp->name);
		f_temp = f_temp->next;
	}
	return info;
}

/**
* Configuration Information
*/
char * ffmpeg_configuration_info()
{
	char *info = (char *)malloc(40000);
	memset(info, 0, 40000);

	av_register_all();

	sprintf(info, "%s\n", avcodec_configuration());

	return info;
}

char * ffmpeg_get_info()
{
	char *allInfo = (char *)malloc(200000);
	memset(allInfo, 0, 200000);

	char *info = NULL;
	int index;
	info = ffmpeg_configuration_info();
	index = sprintf(allInfo, "%s\n", "\n<<Configuration>>\n");
	index += sprintf(allInfo + index, "%s\n", info);
	free(info);

	info = ffmpeg_urlprotocol_info();
	index += sprintf(allInfo + index, "%s\n", "\n<<URLProtocol>>\n");
	index += sprintf(allInfo + index, "%s\n", info);
	free(info);

	info = ffmpeg_avformat_info();
	index += sprintf(allInfo + index, "%s\n", "\n<<AVFormat>>\n");
	index += sprintf(allInfo + index, "%s\n", info);
	free(info);

	info = ffmpeg_avfilter_info();
	index += sprintf(allInfo + index, "%s\n", "\n<<AVFilter>>\n");
	index += sprintf(allInfo + index, "%s\n", info);
	free(info);

	info = ffmpeg_avcodec_info();
	index += sprintf(allInfo + index, "%s\n", "\n<<AVCodec>>\n");
	index += sprintf(allInfo + index, "%s\n", info);
	free(info);

	return allInfo;
}
