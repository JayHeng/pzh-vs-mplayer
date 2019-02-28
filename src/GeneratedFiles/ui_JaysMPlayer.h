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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JaysMPlayerClass
{
public:
    QWidget *centralWidget;
    QLabel *label_ffmpegInfo;
    QTextEdit *textEdit_ffmpegInfo;
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
        label_ffmpegInfo->setGeometry(QRect(40, 20, 71, 16));
        textEdit_ffmpegInfo = new QTextEdit(centralWidget);
        textEdit_ffmpegInfo->setObjectName(QString::fromUtf8("textEdit_ffmpegInfo"));
        textEdit_ffmpegInfo->setGeometry(QRect(30, 40, 541, 281));
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
    } // retranslateUi

};

namespace Ui {
    class JaysMPlayerClass: public Ui_JaysMPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAYSMPLAYER_H
