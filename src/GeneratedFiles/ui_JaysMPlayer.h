/********************************************************************************
** Form generated from reading UI file 'JaysMPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAYSMPLAYER_H
#define UI_JAYSMPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JaysMPlayerClass
{
public:
    QWidget *centralWidget;
    QLabel *label_ffmpegInfo;
    QTextEdit *textEdit_ffmpegInfo;
    QPushButton *pushButton_ffmpegInfo;
    QPushButton *pushButton_mediaPlay;
    QLabel *label_sdlAction;
    QToolButton *toolButton_browseFile;
    QTextEdit *textEdit_showFilePath;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JaysMPlayerClass)
    {
        if (JaysMPlayerClass->objectName().isEmpty())
            JaysMPlayerClass->setObjectName(QString::fromUtf8("JaysMPlayerClass"));
        JaysMPlayerClass->resize(600, 400);
        centralWidget = new QWidget(JaysMPlayerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_ffmpegInfo = new QLabel(centralWidget);
        label_ffmpegInfo->setObjectName(QString::fromUtf8("label_ffmpegInfo"));
        label_ffmpegInfo->setGeometry(QRect(40, 10, 71, 16));
        textEdit_ffmpegInfo = new QTextEdit(centralWidget);
        textEdit_ffmpegInfo->setObjectName(QString::fromUtf8("textEdit_ffmpegInfo"));
        textEdit_ffmpegInfo->setGeometry(QRect(30, 40, 541, 231));
        pushButton_ffmpegInfo = new QPushButton(centralWidget);
        pushButton_ffmpegInfo->setObjectName(QString::fromUtf8("pushButton_ffmpegInfo"));
        pushButton_ffmpegInfo->setGeometry(QRect(120, 10, 75, 23));
        pushButton_mediaPlay = new QPushButton(centralWidget);
        pushButton_mediaPlay->setObjectName(QString::fromUtf8("pushButton_mediaPlay"));
        pushButton_mediaPlay->setGeometry(QRect(510, 320, 75, 23));
        label_sdlAction = new QLabel(centralWidget);
        label_sdlAction->setObjectName(QString::fromUtf8("label_sdlAction"));
        label_sdlAction->setGeometry(QRect(40, 290, 61, 16));
        toolButton_browseFile = new QToolButton(centralWidget);
        toolButton_browseFile->setObjectName(QString::fromUtf8("toolButton_browseFile"));
        toolButton_browseFile->setGeometry(QRect(430, 320, 71, 21));
        textEdit_showFilePath = new QTextEdit(centralWidget);
        textEdit_showFilePath->setObjectName(QString::fromUtf8("textEdit_showFilePath"));
        textEdit_showFilePath->setGeometry(QRect(50, 320, 371, 21));
        JaysMPlayerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JaysMPlayerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        JaysMPlayerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JaysMPlayerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        JaysMPlayerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JaysMPlayerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        JaysMPlayerClass->setStatusBar(statusBar);

        retranslateUi(JaysMPlayerClass);

        QMetaObject::connectSlotsByName(JaysMPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *JaysMPlayerClass)
    {
        JaysMPlayerClass->setWindowTitle(QApplication::translate("JaysMPlayerClass", "JaysMPlayer", nullptr));
        label_ffmpegInfo->setText(QApplication::translate("JaysMPlayerClass", "FFmpeg Info:", nullptr));
        pushButton_ffmpegInfo->setText(QApplication::translate("JaysMPlayerClass", "Show", nullptr));
        pushButton_mediaPlay->setText(QApplication::translate("JaysMPlayerClass", "Play", nullptr));
        label_sdlAction->setText(QApplication::translate("JaysMPlayerClass", "SDL Action:", nullptr));
        toolButton_browseFile->setText(QApplication::translate("JaysMPlayerClass", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JaysMPlayerClass: public Ui_JaysMPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAYSMPLAYER_H
