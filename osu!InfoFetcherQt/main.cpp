#include "stdafx.h"
#include "osuInfoFetcherQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	osuInfoFetcherQt w;
	w.show();
	return a.exec();
}
