#include "JaysMPlayer.h"
#include "QDir"
#include "QFileDialog"
#include "mp_ffmpeg_info.h"
#include "mp_sdl_play.h"

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
	char *info;
	// Get all FFmpeg info 
	info = ffmpeg_get_info();
	// Show FFmpeg info
	ui.textEdit_ffmpegInfo->insertPlainText(info);
	free(info);
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
	QByteArray arrayFilePath = filePath.toLatin1();
	strFilePath = arrayFilePath.data();
	// Play select file by SDL
	sdl_play_yuv(strFilePath);
}

