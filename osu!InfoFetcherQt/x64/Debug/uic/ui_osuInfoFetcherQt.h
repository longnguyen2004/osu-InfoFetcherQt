/********************************************************************************
** Form generated from reading UI file 'osuInfoFetcherQt.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSUINFOFETCHERQT_H
#define UI_OSUINFOFETCHERQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_osuInfoFetcherQtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *osuInfoFetcherQtClass)
    {
        if (osuInfoFetcherQtClass->objectName().isEmpty())
            osuInfoFetcherQtClass->setObjectName(QString::fromUtf8("osuInfoFetcherQtClass"));
        osuInfoFetcherQtClass->resize(600, 400);
        menuBar = new QMenuBar(osuInfoFetcherQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        osuInfoFetcherQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(osuInfoFetcherQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        osuInfoFetcherQtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(osuInfoFetcherQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        osuInfoFetcherQtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(osuInfoFetcherQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        osuInfoFetcherQtClass->setStatusBar(statusBar);

        retranslateUi(osuInfoFetcherQtClass);

        QMetaObject::connectSlotsByName(osuInfoFetcherQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *osuInfoFetcherQtClass)
    {
        osuInfoFetcherQtClass->setWindowTitle(QCoreApplication::translate("osuInfoFetcherQtClass", "osuInfoFetcherQt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class osuInfoFetcherQtClass: public Ui_osuInfoFetcherQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSUINFOFETCHERQT_H
