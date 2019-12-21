#include "stdafx.h"
#include "osuInfoFetcherQt.h"
#include "APIKeyEntry.h"
#include "global_var.h"
#include <QUrl>
#include <QUrlQuery>

QString APIKey;
QFile* APIKey_File;

void osuInfoFetcherQt::initAutoFetch(bool enabled)
{
	if (enabled)
	{
		ui.fetchInterval->setDisabled(true);
		ui.fetchButton->setDisabled(true);
		timer->setInterval(ui.fetchInterval->value()*1000);
		timer->start();
	}
	else
	{
		ui.fetchInterval->setDisabled(false);
		ui.fetchButton->setDisabled(false);
		timer->stop();
	}
}

void osuInfoFetcherQt::onFetch()
{
	QString username = ui.username->text();
	int mode = ui.mode->currentIndex();
	QUrl url("https://osu.ppy.sh/api/get_user");
	QUrlQuery query;
	query.addQueryItem("k", APIKey);
	query.addQueryItem("u", username);
	query.addQueryItem("m", QString::number(mode));
	url.setQuery(query);
	ui.debug->append(QString("Connecting to: ") + url.toString() + '\n');
	data = api_req_manager->get(QNetworkRequest(url));
	connect(data, &QNetworkReply::finished, this, &osuInfoFetcherQt::onDataReceive);
}

void osuInfoFetcherQt::onDataReceive()
{
	QJsonDocument json = QJsonDocument::fromJson(data->readAll());
	ui.debug->append(QString("Received JSON: \n") + QString(json.toJson(QJsonDocument::Indented)));
	QJsonObject json_dump = json.array().at(0).toObject();
	ui.date_join->setText(json_dump.value("join_date").toString() + " UTC");
	ui.pp->setText(json_dump.value("pp_raw").toString());
	ui.rank_global->setText(json_dump.value("pp_rank").toString());
	ui.rank_country->setText(json_dump.value("pp_country_rank").toString());
	ui.score_ranked->setText(json_dump.value("ranked_score").toString());
	ui.score_total->setText(json_dump.value("total_score").toString());
	ui.accuracy->setText(json_dump.value("accuracy").toString() + '%');
	ui.count_ssh->setText(json_dump.value("count_rank_ssh").toString());
	ui.count_ss->setText(json_dump.value("count_rank_ss").toString());
	ui.count_sh->setText(json_dump.value("count_rank_sh").toString());
	ui.count_s->setText(json_dump.value("count_rank_s").toString());
	ui.count_a->setText(json_dump.value("count_rank_a").toString());
}

osuInfoFetcherQt::osuInfoFetcherQt(QWidget *parent)
	: QMainWindow(parent)
{
	api_req_manager = new QNetworkAccessManager(this);
	api_req_manager->connectToHostEncrypted("https://osu.ppy.sh");
	ui.setupUi(this);
	ui.fetchButton->setDefault(true);
	timer = new QTimer(this);
	ui.menuBar->addAction("API Key", [this]()
		{
			QDialog* dialog = new APIKeyEntry();
			dialog->exec();
		});
	APIKey_File = new QFile("apikey.key", this);
	if (APIKey_File->exists())
	{
		APIKey_File->open(QIODevice::ReadOnly | QIODevice::Text);
		QTextStream st(APIKey_File);
		APIKey = st.readAll();
		APIKey_File->close();
	}
	ui.fetchInterval->setSuffix("s");
	connect(ui.fetchButton, &QPushButton::pressed, this, &osuInfoFetcherQt::onFetch);
	connect(timer, &QTimer::timeout, this, &osuInfoFetcherQt::onFetch);
	connect(ui.AutoFetching, &QCheckBox::toggled, this, &osuInfoFetcherQt::initAutoFetch);
}
