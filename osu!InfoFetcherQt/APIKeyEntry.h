#pragma once

#include <QDialog>
#include "ui_APIKeyEntry.h"

class APIKeyEntry : public QDialog
{
	Q_OBJECT

public:
	APIKeyEntry(QWidget *parent = Q_NULLPTR);
	~APIKeyEntry();

private:
	Ui::APIKeyEntry ui;

public slots:
	void onOKbutton();
};
