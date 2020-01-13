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
    QPushButton *pushButton_playVideo;
    QLabel *label_sdlPlayer;
    QToolButton *toolButton_browseVideoFile;
    QTextEdit *textEdit_showVideoFile;
    QTextEdit *textEdit_showMediaFile;
    QToolButton *toolButton_browseMediaFile;
    QPushButton *pushButton_decodeMedia;
    QComboBox *comboBox_decMediaInFormat;
    QLabel *label_ffmpegDecoder;
    QComboBox *comboBox_pixelFormat;
    QLabel *label_pixelFormat;
    QLabel *label_decMediaInFormat;
    QLabel *label_frameWidth;
    QLabel *label_frameHeight;
    QTextEdit *textEdit_frameWidth;
    QTextEdit *textEdit_frameHeight;
    QTextEdit *textEdit_showAudioFile;
    QToolButton *toolButton_browseAudioFile;
    QLabel *label_ffmpegEncoder;
    QLabel *label_encMediaInFormat;
    QPushButton *pushButton_encodeMedia;
    QComboBox *comboBox_encMediaInFormat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JaysMPlayerClass)
    {
        if (JaysMPlayerClass->objectName().isEmpty())
            JaysMPlayerClass->setObjectName(QString::fromUtf8("JaysMPlayerClass"));
        JaysMPlayerClass->resize(626, 400);
        centralWidget = new QWidget(JaysMPlayerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_ffmpegInfo = new QLabel(centralWidget);
        label_ffmpegInfo->setObjectName(QString::fromUtf8("label_ffmpegInfo"));
        label_ffmpegInfo->setGeometry(QRect(40, 10, 71, 16));
        textEdit_ffmpegInfo = new QTextEdit(centralWidget);
        textEdit_ffmpegInfo->setObjectName(QString::fromUtf8("textEdit_ffmpegInfo"));
        textEdit_ffmpegInfo->setGeometry(QRect(30, 40, 571, 91));
        pushButton_ffmpegInfo = new QPushButton(centralWidget);
        pushButton_ffmpegInfo->setObjectName(QString::fromUtf8("pushButton_ffmpegInfo"));
        pushButton_ffmpegInfo->setGeometry(QRect(120, 10, 75, 23));
        pushButton_playVideo = new QPushButton(centralWidget);
        pushButton_playVideo->setObjectName(QString::fromUtf8("pushButton_playVideo"));
        pushButton_playVideo->setGeometry(QRect(510, 270, 75, 23));
        label_sdlPlayer = new QLabel(centralWidget);
        label_sdlPlayer->setObjectName(QString::fromUtf8("label_sdlPlayer"));
        label_sdlPlayer->setGeometry(QRect(40, 220, 61, 16));
        toolButton_browseVideoFile = new QToolButton(centralWidget);
        toolButton_browseVideoFile->setObjectName(QString::fromUtf8("toolButton_browseVideoFile"));
        toolButton_browseVideoFile->setGeometry(QRect(430, 270, 71, 21));
        textEdit_showVideoFile = new QTextEdit(centralWidget);
        textEdit_showVideoFile->setObjectName(QString::fromUtf8("textEdit_showVideoFile"));
        textEdit_showVideoFile->setGeometry(QRect(50, 270, 371, 21));
        textEdit_showMediaFile = new QTextEdit(centralWidget);
        textEdit_showMediaFile->setObjectName(QString::fromUtf8("textEdit_showMediaFile"));
        textEdit_showMediaFile->setGeometry(QRect(50, 190, 371, 21));
        toolButton_browseMediaFile = new QToolButton(centralWidget);
        toolButton_browseMediaFile->setObjectName(QString::fromUtf8("toolButton_browseMediaFile"));
        toolButton_browseMediaFile->setGeometry(QRect(430, 190, 71, 21));
        pushButton_decodeMedia = new QPushButton(centralWidget);
        pushButton_decodeMedia->setObjectName(QString::fromUtf8("pushButton_decodeMedia"));
        pushButton_decodeMedia->setGeometry(QRect(210, 160, 75, 23));
        comboBox_decMediaInFormat = new QComboBox(centralWidget);
        comboBox_decMediaInFormat->addItem(QString());
        comboBox_decMediaInFormat->addItem(QString());
        comboBox_decMediaInFormat->addItem(QString());
        comboBox_decMediaInFormat->setObjectName(QString::fromUtf8("comboBox_decMediaInFormat"));
        comboBox_decMediaInFormat->setGeometry(QRect(130, 160, 71, 22));
        comboBox_decMediaInFormat->setEditable(true);
        comboBox_decMediaInFormat->setMaxVisibleItems(3);
        label_ffmpegDecoder = new QLabel(centralWidget);
        label_ffmpegDecoder->setObjectName(QString::fromUtf8("label_ffmpegDecoder"));
        label_ffmpegDecoder->setGeometry(QRect(40, 140, 101, 16));
        comboBox_pixelFormat = new QComboBox(centralWidget);
        comboBox_pixelFormat->addItem(QString());
        comboBox_pixelFormat->setObjectName(QString::fromUtf8("comboBox_pixelFormat"));
        comboBox_pixelFormat->setGeometry(QRect(130, 240, 71, 22));
        comboBox_pixelFormat->setEditable(true);
        comboBox_pixelFormat->setMaxVisibleItems(3);
        label_pixelFormat = new QLabel(centralWidget);
        label_pixelFormat->setObjectName(QString::fromUtf8("label_pixelFormat"));
        label_pixelFormat->setGeometry(QRect(60, 240, 71, 16));
        label_decMediaInFormat = new QLabel(centralWidget);
        label_decMediaInFormat->setObjectName(QString::fromUtf8("label_decMediaInFormat"));
        label_decMediaInFormat->setGeometry(QRect(50, 160, 71, 16));
        label_frameWidth = new QLabel(centralWidget);
        label_frameWidth->setObjectName(QString::fromUtf8("label_frameWidth"));
        label_frameWidth->setGeometry(QRect(230, 240, 71, 16));
        label_frameHeight = new QLabel(centralWidget);
        label_frameHeight->setObjectName(QString::fromUtf8("label_frameHeight"));
        label_frameHeight->setGeometry(QRect(390, 240, 71, 16));
        textEdit_frameWidth = new QTextEdit(centralWidget);
        textEdit_frameWidth->setObjectName(QString::fromUtf8("textEdit_frameWidth"));
        textEdit_frameWidth->setGeometry(QRect(300, 240, 81, 21));
        textEdit_frameHeight = new QTextEdit(centralWidget);
        textEdit_frameHeight->setObjectName(QString::fromUtf8("textEdit_frameHeight"));
        textEdit_frameHeight->setGeometry(QRect(460, 240, 81, 21));
        textEdit_showAudioFile = new QTextEdit(centralWidget);
        textEdit_showAudioFile->setObjectName(QString::fromUtf8("textEdit_showAudioFile"));
        textEdit_showAudioFile->setGeometry(QRect(50, 320, 371, 21));
        toolButton_browseAudioFile = new QToolButton(centralWidget);
        toolButton_browseAudioFile->setObjectName(QString::fromUtf8("toolButton_browseAudioFile"));
        toolButton_browseAudioFile->setGeometry(QRect(430, 320, 71, 21));
        label_ffmpegEncoder = new QLabel(centralWidget);
        label_ffmpegEncoder->setObjectName(QString::fromUtf8("label_ffmpegEncoder"));
        label_ffmpegEncoder->setGeometry(QRect(330, 140, 101, 16));
        label_encMediaInFormat = new QLabel(centralWidget);
        label_encMediaInFormat->setObjectName(QString::fromUtf8("label_encMediaInFormat"));
        label_encMediaInFormat->setGeometry(QRect(340, 160, 71, 16));
        pushButton_encodeMedia = new QPushButton(centralWidget);
        pushButton_encodeMedia->setObjectName(QString::fromUtf8("pushButton_encodeMedia"));
        pushButton_encodeMedia->setGeometry(QRect(500, 160, 75, 23));
        comboBox_encMediaInFormat = new QComboBox(centralWidget);
        comboBox_encMediaInFormat->addItem(QString());
        comboBox_encMediaInFormat->addItem(QString());
        comboBox_encMediaInFormat->setObjectName(QString::fromUtf8("comboBox_encMediaInFormat"));
        comboBox_encMediaInFormat->setGeometry(QRect(420, 160, 71, 22));
        comboBox_encMediaInFormat->setEditable(true);
        comboBox_encMediaInFormat->setMaxVisibleItems(3);
        JaysMPlayerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JaysMPlayerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 626, 21));
        JaysMPlayerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JaysMPlayerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        JaysMPlayerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JaysMPlayerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        JaysMPlayerClass->setStatusBar(statusBar);

        retranslateUi(JaysMPlayerClass);

        comboBox_decMediaInFormat->setCurrentIndex(0);
        comboBox_pixelFormat->setCurrentIndex(0);
        comboBox_encMediaInFormat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(JaysMPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *JaysMPlayerClass)
    {
        JaysMPlayerClass->setWindowTitle(QApplication::translate("JaysMPlayerClass", "JaysMPlayer", nullptr));
        label_ffmpegInfo->setText(QApplication::translate("JaysMPlayerClass", "FFmpeg Info:", nullptr));
        pushButton_ffmpegInfo->setText(QApplication::translate("JaysMPlayerClass", "Show", nullptr));
        pushButton_playVideo->setText(QApplication::translate("JaysMPlayerClass", "Play", nullptr));
        label_sdlPlayer->setText(QApplication::translate("JaysMPlayerClass", "SDL Player:", nullptr));
        toolButton_browseVideoFile->setText(QApplication::translate("JaysMPlayerClass", "Browse", nullptr));
        toolButton_browseMediaFile->setText(QApplication::translate("JaysMPlayerClass", "Browse", nullptr));
        pushButton_decodeMedia->setText(QApplication::translate("JaysMPlayerClass", "Decode", nullptr));
        comboBox_decMediaInFormat->setItemText(0, QApplication::translate("JaysMPlayerClass", "H.264", nullptr));
        comboBox_decMediaInFormat->setItemText(1, QApplication::translate("JaysMPlayerClass", "HEVC", nullptr));
        comboBox_decMediaInFormat->setItemText(2, QApplication::translate("JaysMPlayerClass", "MPEG2", nullptr));

        label_ffmpegDecoder->setText(QApplication::translate("JaysMPlayerClass", "FFmpeg Decoder:", nullptr));
        comboBox_pixelFormat->setItemText(0, QApplication::translate("JaysMPlayerClass", "YUV420", nullptr));

        label_pixelFormat->setText(QApplication::translate("JaysMPlayerClass", "Pixel Format:", nullptr));
        label_decMediaInFormat->setText(QApplication::translate("JaysMPlayerClass", "Media Format:", nullptr));
        label_frameWidth->setText(QApplication::translate("JaysMPlayerClass", "Frame Width:", nullptr));
        label_frameHeight->setText(QApplication::translate("JaysMPlayerClass", "Frame Height:", nullptr));
        toolButton_browseAudioFile->setText(QApplication::translate("JaysMPlayerClass", "Browse", nullptr));
        label_ffmpegEncoder->setText(QApplication::translate("JaysMPlayerClass", "FFmpeg Encoder:", nullptr));
        label_encMediaInFormat->setText(QApplication::translate("JaysMPlayerClass", "Media Format:", nullptr));
        pushButton_encodeMedia->setText(QApplication::translate("JaysMPlayerClass", "Encode", nullptr));
        comboBox_encMediaInFormat->setItemText(0, QApplication::translate("JaysMPlayerClass", "YUV", nullptr));
        comboBox_encMediaInFormat->setItemText(1, QApplication::translate("JaysMPlayerClass", "RGB", nullptr));

    } // retranslateUi

};

namespace Ui {
    class JaysMPlayerClass: public Ui_JaysMPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAYSMPLAYER_H
