#include "JaysMPlayer.h"
#include "ffmpeg_core.h"

JaysMPlayer::JaysMPlayer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_ffmpegInfo, SIGNAL(clicked(bool)), this, SLOT(callback_showMsg()));
}


JaysMPlayer::~JaysMPlayer()
{

}

void JaysMPlayer::callback_showMsg()
{
	char *infostr = NULL;
	infostr = configurationinfo();
	ui.textEdit_ffmpegInfo->insertPlainText("\n<<Configuration>>\n%s");
	ui.textEdit_ffmpegInfo->insertPlainText(infostr);
	free(infostr);

	infostr = urlprotocolinfo();
	ui.textEdit_ffmpegInfo->insertPlainText("\n<<URLProtocol>>\n%s");
	ui.textEdit_ffmpegInfo->insertPlainText(infostr);
	free(infostr);

	infostr = avformatinfo();
	ui.textEdit_ffmpegInfo->insertPlainText("\n<<AVFormat>>\n%s");
	ui.textEdit_ffmpegInfo->insertPlainText(infostr);
	free(infostr);

	infostr = avcodecinfo();
	ui.textEdit_ffmpegInfo->insertPlainText("\n<<AVCodec>>\n%s");
	ui.textEdit_ffmpegInfo->insertPlainText(infostr);
	free(infostr);

	infostr = avfilterinfo();
	ui.textEdit_ffmpegInfo->insertPlainText("\n<<AVFilter>>\n%s");
	ui.textEdit_ffmpegInfo->insertPlainText(infostr);
	free(infostr);
}

