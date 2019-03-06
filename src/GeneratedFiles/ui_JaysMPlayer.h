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
#include <QtWidgets/QComboBox>
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
    QLabel *label_sdlPlayer;
    QToolButton *toolButton_browseFileToPlay;
    QTextEdit *textEdit_showFileToPlay;
    QTextEdit *textEdit_showFileToDecode;
    QToolButton *toolButton_browseFileToDecode;
    QPushButton *pushButton_mediaDecode;
    QComboBox *comboBox_mediaInFormat;
    QLabel *label_ffmpegDecoder;
    QComboBox *comboBox_pixelFormat;
    QLabel *label_pixelFormat;
    QLabel *label_mediaInFormat;
    QLabel *label_frameWidth;
    QLabel *label_frameHeight;
    QTextEdit *textEdit_frameWidth;
    QTextEdit *textEdit_frameHeight;
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
        textEdit_ffmpegInfo->setGeometry(QRect(30, 40, 541, 111));
        pushButton_ffmpegInfo = new QPushButton(centralWidget);
        pushButton_ffmpegInfo->setObjectName(QString::fromUtf8("pushButton_ffmpegInfo"));
        pushButton_ffmpegInfo->setGeometry(QRect(120, 10, 75, 23));
        pushButton_mediaPlay = new QPushButton(centralWidget);
        pushButton_mediaPlay->setObjectName(QString::fromUtf8("pushButton_mediaPlay"));
        pushButton_mediaPlay->setGeometry(QRect(510, 320, 75, 23));
        label_sdlPlayer = new QLabel(centralWidget);
        label_sdlPlayer->setObjectName(QString::fromUtf8("label_sdlPlayer"));
        label_sdlPlayer->setGeometry(QRect(40, 270, 61, 16));
        toolButton_browseFileToPlay = new QToolButton(centralWidget);
        toolButton_browseFileToPlay->setObjectName(QString::fromUtf8("toolButton_browseFileToPlay"));
        toolButton_browseFileToPlay->setGeometry(QRect(430, 320, 71, 21));
        textEdit_showFileToPlay = new QTextEdit(centralWidget);
        textEdit_showFileToPlay->setObjectName(QString::fromUtf8("textEdit_showFileToPlay"));
        textEdit_showFileToPlay->setGeometry(QRect(50, 320, 371, 21));
        textEdit_showFileToDecode = new QTextEdit(centralWidget);
        textEdit_showFileToDecode->setObjectName(QString::fromUtf8("textEdit_showFileToDecode"));
        textEdit_showFileToDecode->setGeometry(QRect(50, 220, 371, 21));
        toolButton_browseFileToDecode = new QToolButton(centralWidget);
        toolButton_browseFileToDecode->setObjectName(QString::fromUtf8("toolButton_browseFileToDecode"));
        toolButton_browseFileToDecode->setGeometry(QRect(430, 220, 71, 21));
        pushButton_mediaDecode = new QPushButton(centralWidget);
        pushButton_mediaDecode->setObjectName(QString::fromUtf8("pushButton_mediaDecode"));
        pushButton_mediaDecode->setGeometry(QRect(510, 220, 75, 23));
        comboBox_mediaInFormat = new QComboBox(centralWidget);
        comboBox_mediaInFormat->addItem(QString());
        comboBox_mediaInFormat->addItem(QString());
        comboBox_mediaInFormat->addItem(QString());
        comboBox_mediaInFormat->setObjectName(QString::fromUtf8("comboBox_mediaInFormat"));
        comboBox_mediaInFormat->setGeometry(QRect(130, 190, 71, 22));
        comboBox_mediaInFormat->setEditable(true);
        comboBox_mediaInFormat->setMaxVisibleItems(3);
        label_ffmpegDecoder = new QLabel(centralWidget);
        label_ffmpegDecoder->setObjectName(QString::fromUtf8("label_ffmpegDecoder"));
        label_ffmpegDecoder->setGeometry(QRect(40, 170, 101, 16));
        comboBox_pixelFormat = new QComboBox(centralWidget);
        comboBox_pixelFormat->addItem(QString());
        comboBox_pixelFormat->setObjectName(QString::fromUtf8("comboBox_pixelFormat"));
        comboBox_pixelFormat->setGeometry(QRect(130, 290, 71, 22));
        comboBox_pixelFormat->setEditable(true);
        comboBox_pixelFormat->setMaxVisibleItems(3);
        label_pixelFormat = new QLabel(centralWidget);
        label_pixelFormat->setObjectName(QString::fromUtf8("label_pixelFormat"));
        label_pixelFormat->setGeometry(QRect(60, 290, 71, 16));
        label_mediaInFormat = new QLabel(centralWidget);
        label_mediaInFormat->setObjectName(QString::fromUtf8("label_mediaInFormat"));
        label_mediaInFormat->setGeometry(QRect(50, 190, 71, 16));
        label_frameWidth = new QLabel(centralWidget);
        label_frameWidth->setObjectName(QString::fromUtf8("label_frameWidth"));
        label_frameWidth->setGeometry(QRect(230, 290, 71, 16));
        label_frameHeight = new QLabel(centralWidget);
        label_frameHeight->setObjectName(QString::fromUtf8("label_frameHeight"));
        label_frameHeight->setGeometry(QRect(390, 290, 71, 16));
        textEdit_frameWidth = new QTextEdit(centralWidget);
        textEdit_frameWidth->setObjectName(QString::fromUtf8("textEdit_frameWidth"));
        textEdit_frameWidth->setGeometry(QRect(300, 290, 81, 21));
        textEdit_frameHeight = new QTextEdit(centralWidget);
        textEdit_frameHeight->setObjectName(QString::fromUtf8("textEdit_frameHeight"));
        textEdit_frameHeight->setGeometry(QRect(460, 290, 81, 21));
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

        comboBox_mediaInFormat->setCurrentIndex(0);
        comboBox_pixelFormat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(JaysMPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *JaysMPlayerClass)
    {
        JaysMPlayerClass->setWindowTitle(QApplication::translate("JaysMPlayerClass", "JaysMPlayer", nullptr));
        label_ffmpegInfo->setText(QApplication::translate("JaysMPlayerClass", "FFmpeg Info:", nullptr));
        pushButton_ffmpegInfo->setText(QApplication::translate("JaysMPlayerClass", "Show", nullptr));
        pushButton_mediaPlay->setText(QApplication::translate("JaysMPlayerClass", "Play", nullptr));
        label_sdlPlayer->setText(QApplication::translate("JaysMPlayerClass", "SDL Player:", nullptr));
        toolButton_browseFileToPlay->setText(QApplication::translate("JaysMPlayerClass", "Browse", nullptr));
        toolButton_browseFileToDecode->setText(QApplication::translate("JaysMPlayerClass", "Browse", nullptr));
        pushButton_mediaDecode->setText(QApplication::translate("JaysMPlayerClass", "Decode", nullptr));
        comboBox_mediaInFormat->setItemText(0, QApplication::translate("JaysMPlayerClass", "H.264", nullptr));
        comboBox_mediaInFormat->setItemText(1, QApplication::translate("JaysMPlayerClass", "HEVC", nullptr));
        comboBox_mediaInFormat->setItemText(2, QApplication::translate("JaysMPlayerClass", "MPEG2", nullptr));

        label_ffmpegDecoder->setText(QApplication::translate("JaysMPlayerClass", "FFmpeg Decoder:", nullptr));
        comboBox_pixelFormat->setItemText(0, QApplication::translate("JaysMPlayerClass", "YUV420", nullptr));

        label_pixelFormat->setText(QApplication::translate("JaysMPlayerClass", "Pixel Format:", nullptr));
        label_mediaInFormat->setText(QApplication::translate("JaysMPlayerClass", "Media Format:", nullptr));
        label_frameWidth->setText(QApplication::translate("JaysMPlayerClass", "Frame Width:", nullptr));
        label_frameHeight->setText(QApplication::translate("JaysMPlayerClass", "Frame Height:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JaysMPlayerClass: public Ui_JaysMPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAYSMPLAYER_H
