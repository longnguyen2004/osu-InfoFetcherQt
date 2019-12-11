/********************************************************************************
** Form generated from reading UI file 'APIKeyEntry.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APIKEYENTRY_H
#define UI_APIKEYENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_APIKeyEntry
{
public:
    QPushButton *okButton;
    QLineEdit *apikey_entry;
    QLabel *label;

    void setupUi(QDialog *APIKeyEntry)
    {
        if (APIKeyEntry->objectName().isEmpty())
            APIKeyEntry->setObjectName(QString::fromUtf8("APIKeyEntry"));
        APIKeyEntry->resize(389, 207);
        okButton = new QPushButton(APIKeyEntry);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(160, 160, 75, 23));
        apikey_entry = new QLineEdit(APIKeyEntry);
        apikey_entry->setObjectName(QString::fromUtf8("apikey_entry"));
        apikey_entry->setGeometry(QRect(30, 90, 331, 20));
        label = new QLabel(APIKeyEntry);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 121, 16));

        retranslateUi(APIKeyEntry);

        QMetaObject::connectSlotsByName(APIKeyEntry);
    } // setupUi

    void retranslateUi(QDialog *APIKeyEntry)
    {
        APIKeyEntry->setWindowTitle(QCoreApplication::translate("APIKeyEntry", "APIKeyEntry", nullptr));
        okButton->setText(QCoreApplication::translate("APIKeyEntry", "OK", nullptr));
        label->setText(QCoreApplication::translate("APIKeyEntry", "Enter your API Key:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class APIKeyEntry: public Ui_APIKeyEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APIKEYENTRY_H
