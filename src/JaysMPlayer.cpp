#include "JaysMPlayer.h"
#include "QDir"
#include "QFileDialog"
#include "mp_ffmpeg_info.h"
#include "mp_ffmpeg_decode.h"
#include "mp_ffmpeg_decode2.h"
#include "mp_ffmpeg_encode.h"
#include "mp_sdl_play.h"

JaysMPlayer::JaysMPlayer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_ffmpegInfo, SIGNAL(clicked(bool)), this, SLOT(callback_showMsg()));
	connect(ui.toolButton_browseMediaFile, SIGNAL(clicked(bool)), this, SLOT(callback_showMediaFile()));
	connect(ui.pushButton_decodeMedia, SIGNAL(clicked(bool)), this, SLOT(callback_decodeMedia()));
	connect(ui.pushButton_encodeMedia, SIGNAL(clicked(bool)), this, SLOT(callback_encodeMedia()));
	connect(ui.toolButton_browseVideoFile, SIGNAL(clicked(bool)), this, SLOT(callback_showVideoFile()));
	connect(ui.pushButton_playVideo, SIGNAL(clicked(bool)), this, SLOT(callback_playVideo()));
	connect(ui.toolButton_browseAudioFile, SIGNAL(clicked(bool)), this, SLOT(callback_showAudioFile()));
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

void JaysMPlayer::callback_showMediaFile()
{
	// Popup dialog to select file
	QString filePath = QDir::toNativeSeparators(QFileDialog::getOpenFileName(this, tr("Browse File"), QDir::currentPath()));
	// Show selected file path
	ui.textEdit_showMediaFile->setText(filePath);
}

void JaysMPlayer::callback_decodeMedia()
{
	// Get media format
	QString mediaFormat = ui.comboBox_decMediaInFormat->currentText();
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
	QString infilePath = ui.textEdit_showMediaFile->toPlainText();
	QByteArray arrayInfilePath = infilePath.toLatin1();
	char *strInfilePath = arrayInfilePath.data();
	// Get video out file path
	QString voutfilePath = ui.textEdit_showVideoFile->toPlainText();
	QByteArray arrayVoutfilePath = voutfilePath.toLatin1();
	char *strVoutfilePath = arrayVoutfilePath.data();
	// Get audio out file path
	QString aoutfilePath = ui.textEdit_showAudioFile->toPlainText();
	QByteArray arrayAoutfilePath = aoutfilePath.toLatin1();
	char *strAoutfilePath = arrayAoutfilePath.data();
	// Start to decode
	ffmpeg_do_decode(format, strInfilePath, strVoutfilePath);
	//ffmpeg_do_decode2(format, strInfilePath, strVoutfilePath, strAoutfilePath);
}

void JaysMPlayer::callback_encodeMedia()
{
	// Get media format
	QString mediaFormat = ui.comboBox_encMediaInFormat->currentText();
	mp_encoder_format_t format;
	if (mediaFormat == "H.264")
	{
		format = kMpEncoderFormat_H264;
	}
	else if (mediaFormat == "HEVC")
	{
		format = kMpEncoderFormat_HEVC;
	}
	// Get media file to decode
	QString infilePath = ui.textEdit_showMediaFile->toPlainText();
	QByteArray arrayInfilePath = infilePath.toLatin1();
	char *strInfilePath = arrayInfilePath.data();
	// Get video out file path
	QString voutfilePath = ui.textEdit_showVideoFile->toPlainText();
	QByteArray arrayVoutfilePath = voutfilePath.toLatin1();
	char *strVoutfilePath = arrayVoutfilePath.data();
	// Start to encode
	ffmpeg_do_encode(format, strInfilePath, strVoutfilePath);
}

void JaysMPlayer::callback_showVideoFile()
{
	// Popup dialog to select file
	QString filePath = QDir::toNativeSeparators(QFileDialog::getOpenFileName(this, tr("Browse File"), QDir::currentPath()));
	// Show selected file path
	ui.textEdit_showVideoFile->setText(filePath);
}

void JaysMPlayer::callback_playVideo()
{
	// Get media file to play
	QString filePath = ui.textEdit_showVideoFile->toPlainText();
	// Convert file path result format (QString->Char*)
	QByteArray arrayFilePath = filePath.toLatin1();
	char *strFilePath = arrayFilePath.data();
    // Get frame size
	QString frameWidth = ui.textEdit_frameWidth->toPlainText();
	QString frameHeight = ui.textEdit_frameHeight->toPlainText();
	// Play media file by SDL
	sdl_play_yuv(strFilePath, frameWidth.toInt(), frameHeight.toInt());
}

void JaysMPlayer::callback_showAudioFile()
{
	// Popup dialog to select file
	QString filePath = QDir::toNativeSeparators(QFileDialog::getOpenFileName(this, tr("Browse File"), QDir::currentPath()));
	// Show selected file path
	ui.textEdit_showAudioFile->setText(filePath);
}

