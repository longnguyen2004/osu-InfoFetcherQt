#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_osuInfoFetcherQt.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>

class osuInfoFetcherQt : public QMainWindow
{
	Q_OBJECT

public:
	osuInfoFetcherQt(QWidget *parent = Q_NULLPTR);

private:
	Ui::osuInfoFetcherQtClass ui;
	QNetworkAccessManager* api_req_manager;
	QNetworkReply* data;

public slots:
	void onFetch();
	void onDataReceive();
};
