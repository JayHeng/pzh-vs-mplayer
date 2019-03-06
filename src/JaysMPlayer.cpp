#include "JaysMPlayer.h"
#include "QDir"
#include "QFileDialog"
#include "mp_ffmpeg_info.h"
#include "mp_ffmpeg_decode.h"
#include "mp_sdl_play.h"

JaysMPlayer::JaysMPlayer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_ffmpegInfo, SIGNAL(clicked(bool)), this, SLOT(callback_showMsg()));
	connect(ui.toolButton_browseFileToDecode, SIGNAL(clicked(bool)), this, SLOT(callback_showFileToDecode()));
	connect(ui.pushButton_mediaDecode, SIGNAL(clicked(bool)), this, SLOT(callback_decodeMedia()));
	connect(ui.toolButton_browseFileToPlay, SIGNAL(clicked(bool)), this, SLOT(callback_showFileToPlay()));
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

void JaysMPlayer::callback_showFileToDecode()
{
	// Popup dialog to select file
	QString filePath = QDir::toNativeSeparators(QFileDialog::getOpenFileName(this, tr("Browse File"), QDir::currentPath()));
	// Show selected file path
	ui.textEdit_showFileToDecode->setText(filePath);
}

void JaysMPlayer::callback_decodeMedia()
{
	// Get media format
	QString mediaFormat = ui.comboBox_mediaInFormat->currentText();
	mp_decoder_format_t format;
	if (mediaFormat == "H.264")
	{
		format = kMpDecoderFormat_H264;
	}
	else if (mediaFormat == "HEVC")
	{
		format = kMpDecoderFormat_HEVC;
	}
	else if (mediaFormat == "MPEG2")
	{
		format = kMpDecoderFormat_MPEG2;
	}
	// Get media file to decode
	QString infilePath = ui.textEdit_showFileToDecode->toPlainText();
	QByteArray arrayInfilePath = infilePath.toLatin1();
	char *strInfilePath = arrayInfilePath.data();
	// Get out file path
	QString outfilePath = ui.textEdit_showFileToPlay->toPlainText();
	QByteArray arrayOutfilePath = outfilePath.toLatin1();
	char *strOutfilePath = arrayOutfilePath.data();
	// Start to decode
	ffmpeg_do_decode(format, strInfilePath, strOutfilePath);
}

void JaysMPlayer::callback_showFileToPlay()
{
	// Popup dialog to select file
	QString filePath = QDir::toNativeSeparators(QFileDialog::getOpenFileName(this, tr("Browse File"), QDir::currentPath()));
	// Show selected file path
	ui.textEdit_showFileToPlay->setText(filePath);
}

void JaysMPlayer::callback_playMedia()
{
	// Get media file to play
	QString filePath = ui.textEdit_showFileToPlay->toPlainText();
	// Convert file path result format (QString->Char*)
	QByteArray arrayFilePath = filePath.toLatin1();
	char *strFilePath = arrayFilePath.data();
    // Get frame size
	QString frameWidth = ui.textEdit_frameWidth->toPlainText();
	QString frameHeight = ui.textEdit_frameHeight->toPlainText();
	// Play media file by SDL
	sdl_play_yuv(strFilePath, frameWidth.toInt(), frameHeight.toInt());
}

