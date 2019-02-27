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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JaysMPlayerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JaysMPlayerClass)
    {
        if (JaysMPlayerClass->objectName().isEmpty())
            JaysMPlayerClass->setObjectName(QString::fromUtf8("JaysMPlayerClass"));
        JaysMPlayerClass->resize(600, 400);
        menuBar = new QMenuBar(JaysMPlayerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        JaysMPlayerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JaysMPlayerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        JaysMPlayerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(JaysMPlayerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        JaysMPlayerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(JaysMPlayerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        JaysMPlayerClass->setStatusBar(statusBar);

        retranslateUi(JaysMPlayerClass);

        QMetaObject::connectSlotsByName(JaysMPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *JaysMPlayerClass)
    {
        JaysMPlayerClass->setWindowTitle(QApplication::translate("JaysMPlayerClass", "JaysMPlayer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JaysMPlayerClass: public Ui_JaysMPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAYSMPLAYER_H
