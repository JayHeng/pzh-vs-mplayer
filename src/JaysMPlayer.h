#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_JaysMPlayer.h"

class JaysMPlayer : public QMainWindow
{
	Q_OBJECT

public:
	JaysMPlayer(QWidget *parent = Q_NULLPTR);

private:
	Ui::JaysMPlayerClass ui;
};
