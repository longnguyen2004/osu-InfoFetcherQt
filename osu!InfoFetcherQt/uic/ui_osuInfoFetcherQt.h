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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QLabel *label_username;
    QPushButton *fetchButton;
    QLabel *label_mode;
    QComboBox *mode;
    QGroupBox *output;
    QLabel *label_rank_country;
    QLineEdit *rank_global;
    QLineEdit *date_join;
    QLineEdit *count_sh;
    QLineEdit *score_ranked;
    QLabel *label_ssh;
    QLineEdit *rank_country;
    QLineEdit *count_ssh;
    QLineEdit *score_total;
    QLabel *label_sh;
    QLineEdit *count_ss;
    QLabel *label_date_join;
    QLineEdit *count_a;
    QLineEdit *count_s;
    QLabel *label_rank_global;
    QLabel *label_score_total;
    QLabel *label_ss;
    QLabel *label_score_ranked;
    QLabel *label_pp;
    QLabel *label_accuracy;
    QLabel *label_a;
    QLineEdit *pp;
    QLineEdit *accuracy;
    QLabel *label_s;
    QTextEdit *debug;
    QLabel *label_debug;
    QCheckBox *AutoFetching;
    QSpinBox *fetchInterval;
    QMenuBar *menuBar;
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
        label_username = new QLabel(centralWidget);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(20, 22, 61, 16));
        fetchButton = new QPushButton(centralWidget);
        fetchButton->setObjectName(QString::fromUtf8("fetchButton"));
        fetchButton->setGeometry(QRect(190, 50, 75, 23));
        label_mode = new QLabel(centralWidget);
        label_mode->setObjectName(QString::fromUtf8("label_mode"));
        label_mode->setGeometry(QRect(260, 22, 61, 16));
        mode = new QComboBox(centralWidget);
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->addItem(QString());
        mode->setObjectName(QString::fromUtf8("mode"));
        mode->setGeometry(QRect(308, 20, 111, 22));
        output = new QGroupBox(centralWidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(20, 79, 421, 441));
        label_rank_country = new QLabel(output);
        label_rank_country->setObjectName(QString::fromUtf8("label_rank_country"));
        label_rank_country->setGeometry(QRect(20, 107, 91, 16));
        rank_global = new QLineEdit(output);
        rank_global->setObjectName(QString::fromUtf8("rank_global"));
        rank_global->setGeometry(QRect(130, 76, 113, 20));
        rank_global->setReadOnly(true);
        date_join = new QLineEdit(output);
        date_join->setObjectName(QString::fromUtf8("date_join"));
        date_join->setGeometry(QRect(130, 20, 281, 20));
        date_join->setReadOnly(true);
        count_sh = new QLineEdit(output);
        count_sh->setObjectName(QString::fromUtf8("count_sh"));
        count_sh->setGeometry(QRect(360, 104, 51, 20));
        count_sh->setReadOnly(true);
        score_ranked = new QLineEdit(output);
        score_ranked->setObjectName(QString::fromUtf8("score_ranked"));
        score_ranked->setGeometry(QRect(130, 132, 113, 20));
        score_ranked->setReadOnly(true);
        label_ssh = new QLabel(output);
        label_ssh->setObjectName(QString::fromUtf8("label_ssh"));
        label_ssh->setGeometry(QRect(310, 51, 41, 16));
        rank_country = new QLineEdit(output);
        rank_country->setObjectName(QString::fromUtf8("rank_country"));
        rank_country->setGeometry(QRect(130, 104, 113, 20));
        rank_country->setReadOnly(true);
        count_ssh = new QLineEdit(output);
        count_ssh->setObjectName(QString::fromUtf8("count_ssh"));
        count_ssh->setGeometry(QRect(360, 48, 51, 20));
        count_ssh->setReadOnly(true);
        score_total = new QLineEdit(output);
        score_total->setObjectName(QString::fromUtf8("score_total"));
        score_total->setGeometry(QRect(130, 160, 113, 20));
        score_total->setReadOnly(true);
        label_sh = new QLabel(output);
        label_sh->setObjectName(QString::fromUtf8("label_sh"));
        label_sh->setGeometry(QRect(310, 107, 41, 16));
        count_ss = new QLineEdit(output);
        count_ss->setObjectName(QString::fromUtf8("count_ss"));
        count_ss->setGeometry(QRect(360, 76, 51, 20));
        count_ss->setReadOnly(true);
        label_date_join = new QLabel(output);
        label_date_join->setObjectName(QString::fromUtf8("label_date_join"));
        label_date_join->setGeometry(QRect(20, 23, 51, 16));
        count_a = new QLineEdit(output);
        count_a->setObjectName(QString::fromUtf8("count_a"));
        count_a->setGeometry(QRect(360, 159, 51, 20));
        count_a->setReadOnly(true);
        count_s = new QLineEdit(output);
        count_s->setObjectName(QString::fromUtf8("count_s"));
        count_s->setGeometry(QRect(360, 132, 51, 20));
        count_s->setReadOnly(true);
        label_rank_global = new QLabel(output);
        label_rank_global->setObjectName(QString::fromUtf8("label_rank_global"));
        label_rank_global->setGeometry(QRect(20, 79, 81, 16));
        label_score_total = new QLabel(output);
        label_score_total->setObjectName(QString::fromUtf8("label_score_total"));
        label_score_total->setGeometry(QRect(20, 163, 91, 16));
        label_ss = new QLabel(output);
        label_ss->setObjectName(QString::fromUtf8("label_ss"));
        label_ss->setGeometry(QRect(310, 79, 41, 16));
        label_score_ranked = new QLabel(output);
        label_score_ranked->setObjectName(QString::fromUtf8("label_score_ranked"));
        label_score_ranked->setGeometry(QRect(20, 135, 91, 16));
        label_pp = new QLabel(output);
        label_pp->setObjectName(QString::fromUtf8("label_pp"));
        label_pp->setGeometry(QRect(20, 51, 41, 16));
        label_accuracy = new QLabel(output);
        label_accuracy->setObjectName(QString::fromUtf8("label_accuracy"));
        label_accuracy->setGeometry(QRect(20, 191, 91, 16));
        label_a = new QLabel(output);
        label_a->setObjectName(QString::fromUtf8("label_a"));
        label_a->setGeometry(QRect(310, 162, 41, 16));
        pp = new QLineEdit(output);
        pp->setObjectName(QString::fromUtf8("pp"));
        pp->setGeometry(QRect(130, 48, 113, 20));
        pp->setReadOnly(true);
        accuracy = new QLineEdit(output);
        accuracy->setObjectName(QString::fromUtf8("accuracy"));
        accuracy->setGeometry(QRect(130, 188, 113, 20));
        label_s = new QLabel(output);
        label_s->setObjectName(QString::fromUtf8("label_s"));
        label_s->setGeometry(QRect(310, 135, 41, 16));
        debug = new QTextEdit(output);
        debug->setObjectName(QString::fromUtf8("debug"));
        debug->setGeometry(QRect(10, 240, 401, 191));
        debug->setReadOnly(true);
        label_debug = new QLabel(output);
        label_debug->setObjectName(QString::fromUtf8("label_debug"));
        label_debug->setGeometry(QRect(10, 220, 91, 16));
        AutoFetching = new QCheckBox(centralWidget);
        AutoFetching->setObjectName(QString::fromUtf8("AutoFetching"));
        AutoFetching->setGeometry(QRect(273, 53, 81, 17));
        fetchInterval = new QSpinBox(centralWidget);
        fetchInterval->setObjectName(QString::fromUtf8("fetchInterval"));
        fetchInterval->setGeometry(QRect(350, 50, 51, 22));
        fetchInterval->setMinimum(3);
        fetchInterval->setMaximum(60);
        osuInfoFetcherQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(osuInfoFetcherQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 460, 21));
        osuInfoFetcherQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(osuInfoFetcherQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        osuInfoFetcherQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(osuInfoFetcherQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        osuInfoFetcherQtClass->setStatusBar(statusBar);

        retranslateUi(osuInfoFetcherQtClass);

        QMetaObject::connectSlotsByName(osuInfoFetcherQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *osuInfoFetcherQtClass)
    {
        osuInfoFetcherQtClass->setWindowTitle(QCoreApplication::translate("osuInfoFetcherQtClass", "osuInfoFetcherQt", nullptr));
        actionAPI_Key->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "API Key", nullptr));
        actionUpdate_Duration->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Update Duration", nullptr));
        label_username->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Username:", nullptr));
        fetchButton->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Fetch", nullptr));
        label_mode->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Mode:", nullptr));
        mode->setItemText(0, QCoreApplication::translate("osuInfoFetcherQtClass", "osu!", nullptr));
        mode->setItemText(1, QCoreApplication::translate("osuInfoFetcherQtClass", "Taiko", nullptr));
        mode->setItemText(2, QCoreApplication::translate("osuInfoFetcherQtClass", "Catch the Beat", nullptr));
        mode->setItemText(3, QCoreApplication::translate("osuInfoFetcherQtClass", "osu!mania", nullptr));

        output->setTitle(QCoreApplication::translate("osuInfoFetcherQtClass", "Output", nullptr));
        label_rank_country->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Country Ranking:", nullptr));
        label_ssh->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "SSH:", nullptr));
        label_sh->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "SH:", nullptr));
        label_date_join->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Join date:", nullptr));
        label_rank_global->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Global Ranking:", nullptr));
        label_score_total->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Total Score:", nullptr));
        label_ss->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "SS:", nullptr));
        label_score_ranked->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Ranked Score:", nullptr));
        label_pp->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "pp:", nullptr));
        label_accuracy->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Accuracy:", nullptr));
        label_a->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "A:", nullptr));
        label_s->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "S:", nullptr));
        label_debug->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Debug:", nullptr));
        AutoFetching->setText(QCoreApplication::translate("osuInfoFetcherQtClass", "Auto fetch", nullptr));
        fetchInterval->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class osuInfoFetcherQtClass: public Ui_osuInfoFetcherQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSUINFOFETCHERQT_H
