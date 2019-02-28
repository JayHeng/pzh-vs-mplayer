#include "JaysMPlayer.h"

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
	ui.textEdit_ffmpegInfo->setText("Hello World");
}
