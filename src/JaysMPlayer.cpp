#include "JaysMPlayer.h"
#include "QDir"
#include "QFileDialog"
#include "ffmpeg_core.h"
#include "sdl_core.h"

JaysMPlayer::JaysMPlayer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_ffmpegInfo, SIGNAL(clicked(bool)), this, SLOT(callback_showMsg()));
	connect(ui.toolButton_browseFile, SIGNAL(clicked(bool)), this, SLOT(callback_showFile()));
	connect(ui.pushButton_mediaPlay, SIGNAL(clicked(bool)), this, SLOT(callback_playMedia()));
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

void JaysMPlayer::callback_showFile()
{
	// Popup dialog to select file
	QString filePath = QDir::toNativeSeparators(QFileDialog::getOpenFileName(this, tr("Browse File"), QDir::currentPath()));
	// Show selected file path
	ui.textEdit_showFilePath->setText(filePath);
}

void JaysMPlayer::callback_playMedia()
{
	// Get current file path
	QString filePath = ui.textEdit_showFilePath->toPlainText();
	// Convert file path result format (QString->Char*)
	char *strFilePath;
	strFilePath = filePath.toLatin1().data();
	// Play select file by SDL
	sdl_play_yuv(strFilePath);
}

