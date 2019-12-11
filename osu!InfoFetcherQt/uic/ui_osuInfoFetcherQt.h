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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_osuInfoFetcherQtClass
{
public:
    QAction *actionAPI_Key;
    QAction *actionUpdate_Duration;
    QWidget *centralWidget;
    QLineEdit *username;
    QLabel *label;
    QLineEdit *pp;
    QPushButton *fetchButton;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *mode;
    QLineEdit *rank_global;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *rank_country;
    QLineEdit *date_join;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *score_ranked;
    QLineEdit *score_total;
    QLabel *label_8;
    QLineEdit *accuracy;
    QLabel *label_9;
    QLineEdit *count_ssh;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *count_ss;
    QLabel *label_12;
    QLineEdit *count_sh;
    QLabel *label_13;
    QLineEdit *count_s;
    QLabel *label_14;
    QLineEdit *count_a;
    QLabel *label_15;
    QTextEdit *debug;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *osuInfoFetcherQtClass)
    {
        if (osuInfoFetcherQtClass->objectName().isEmpty())
            osuInfoFetcherQtClass->setObjectName(QString::fromUtf8("osuInfoFetcherQtClass"));
        osuInfoFetcherQtClass->resize(460, 581);
        actionAPI_Key = new QAction(osuInfoFetcherQtClass);
        actionAPI_Key->setObjectName(QString::fromUtf8("actionAPI_Key"));
        actionUpdate_Duration = new QAction(osuInfoFetcherQtClass);
        actionUpdate_Duration->setObjectName(QString::fromUtf8("actionUpdate_Duration"));
        centralWidget = new QWidget(osuInfoFetcherQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        username = new QLineEdit(centralWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(90, 20, 131, 20));
        username->setReadOnly(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 22, 61, 16));
        pp = new QLineEdit(centralWidget);
        pp->setObjectName(QString::fromUtf8("pp"));
        pp->setGeometry(QRect(140, 115, 113, 20));
        pp->setReadOnly(true);
        fetchButton = new QPushButton(centralWidget);
        fetchButton->setObjectName(QString::fromUtf8("fetchButton"));
        fetchButton->setGeometry(QRect(190, 50, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 118, 41, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 22, 61, 16));
        mode = new QComboBox(centralWidget);
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(308, 20, 111, 22));
        rank_global = new QLineEdit(centralWidget);
        rank_global->setObjectName(QString::fromUtf8("rank_global"));
        rank_global->setGeometry(QRect(140, 143, 113, 20));
        rank_global->setReadOnly(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 146, 81, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 174, 91, 16));
        rank_country = new QLineEdit(centralWidget);
        rank_country->setObjectName(QString::fromUtf8("rank_country"));
        rank_country->setGeometry(QRect(140, 171, 113, 20));
        rank_country->setReadOnly(true);
        date_join = new QLineEdit(centralWidget);
        date_join->setObjectName(QString::fromUtf8("date_join"));
        date_join->setGeometry(QRect(140, 87, 281, 20));
        date_join->setReadOnly(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 90, 51, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 202, 91, 16));
        score_ranked = new QLineEdit(centralWidget);
        score_ranked->setObjectName(QString::fromUtf8("score_ranked"));
        score_ranked->setGeometry(QRect(140, 199, 113, 20));
        score_ranked->setReadOnly(true);
        score_total = new QLineEdit(centralWidget);
        score_total->setObjectName(QString::fromUtf8("score_total"));
        score_total->setGeometry(QRect(140, 227, 113, 20));
        score_total->setReadOnly(true);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 230, 91, 16));
        accuracy = new QLineEdit(centralWidget);
        accuracy->setObjectName(QString::fromUtf8("accuracy"));
        accuracy->setGeometry(QRect(140, 255, 113, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 258, 91, 16));
        count_ssh = new QLineEdit(centralWidget);
        count_ssh->setObjectName(QString::fromUtf8("count_ssh"));
        count_ssh->setGeometry(QRect(370, 115, 51, 20));
        count_ssh->setReadOnly(true);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 118, 41, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(320, 146, 41, 16));
        count_ss = new QLineEdit(centralWidget);
        count_ss->setObjectName(QString::fromUtf8("count_ss"));
        count_ss->setGeometry(QRect(370, 143, 51, 20));
        count_ss->setReadOnly(true);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(320, 174, 41, 16));
        count_sh = new QLineEdit(centralWidget);
        count_sh->setObjectName(QString::fromUtf8("count_sh"));
        count_sh->setGeometry(QRect(370, 171, 51, 20));
        count_sh->setReadOnly(true);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(320, 202, 41, 16));
        count_s = new QLineEdit(centralWidget);
        count_s->setObjectName(QString::fromUtf8("count_s"));
        count_s->setGeometry(QRect(370, 199, 51, 20));
        count_s->setReadOnly(true);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(320, 229, 41, 16));
        count_a = new QLineEdit(centralWidget);
        count_a->setObjectName(QString::fromUtf8("count_a"));
        count_a->setGeometry(QRect(370, 226, 51, 20));
        count_a->setReadOnly(true);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 290, 91, 16));
        debug = new QTextEdit(centralWidget);
        debug->setObjectName(QString::fromUtf8("debug"));
        debug->setGeometry(QRect(30, 320, 401, 191));
        debug->setReadOnly(true);
        osuInfoFetcherQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(osuInfoFetcherQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 21));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        osuInfoFetcherQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(osuInfoFetcherQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        osuInfoFetcherQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(osuInfoFetcherQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        osuInfoFetcherQtClass->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionAPI_Key);
        menuSettings->addAction(actionUpdate_Duration);

        retranslateUi(osuInfoFetcherQtClass);

        QMetaObject::connectSlotsByName(osuInfoFetcherQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *osuInfoFetcherQtClass)
    {
        osuInfoFetcherQtClass->setWindowTitle(QCoreApplication::translate("osuInfoFetcherQtClass", "osuInfoFetcherQt", nullptr));
        actionAPI_Key->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "API Key", nullptr));
        actionUpdate_Duration->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Update Duration", nullptr));
        label->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Username:", nullptr));
        fetchButton->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Fetch", nullptr));
        label_2->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "pp:", nullptr));
        label_3->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Mode:", nullptr));
        mode->setItemText(0, QCoreApplication::translate("osuInfoFetcherQtClass", "osu!", nullptr));
        mode->setItemText(1, QCoreApplication::translate("osuInfoFetcherQtClass", "Taiko", nullptr));
        mode->setItemText(2, QCoreApplication::translate("osuInfoFetcherQtClass", "Catch the Beat", nullptr));
        mode->setItemText(3, QCoreApplication::translate("osuInfoFetcherQtClass", "osu!mania", nullptr));

        label_4->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Global Ranking:", nullptr));
        label_5->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Country Ranking:", nullptr));
        label_6->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Join date:", nullptr));
        label_7->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Ranked Score:", nullptr));
        label_8->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Total Score:", nullptr));
        label_9->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Accuracy:", nullptr));
        label_10->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "SSH:", nullptr));
        label_11->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "SS:", nullptr));
        label_12->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "SH:", nullptr));
        label_13->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "S:", nullptr));
        label_14->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "A:", nullptr));
        label_15->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Debug Output:", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("osuInfoFetcherQtClass", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class osuInfoFetcherQtClass: public Ui_osuInfoFetcherQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSUINFOFETCHERQT_H
