#include "stdafx.h"
#include "APIKeyEntry.h"
#include "global_var.h"

APIKeyEntry::APIKeyEntry(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.okButton, &QPushButton::pressed, this, &APIKeyEntry::onOKbutton);
	ui.apikey_entry->setText(APIKey);
}

APIKeyEntry::~APIKeyEntry()
{
}

void APIKeyEntry::onOKbutton()
{
	if (ui.apikey_entry->text().size())
	{
		APIKey = ui.apikey_entry->text();
		APIKey_File->remove();
		APIKey_File->open(QIODevice::ReadWrite | QIODevice::Text);
		QTextStream st(APIKey_File);
		st << APIKey;
		APIKey_File->close();
		this->close();
	}
	else
	{
		QMessageBox Err_APIKey_Empty;
		Err_APIKey_Empty.setText("API key must not be empty!");
		Err_APIKey_Empty.exec();
	}
}