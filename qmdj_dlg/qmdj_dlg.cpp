#include "qmdj_dlg.h"

#include <QDateTime>
#include "CalendarUtil.h"

qmdj_dlg::qmdj_dlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

qmdj_dlg::~qmdj_dlg()
{

}

void qmdj_dlg::calc()
{
	QDateTime dt = QDateTime::currentDateTime();

	double jd = get_julian_day(2015,2,8,13,26,0);

	ui.label_message->setText(QString::number(jd,'f'));
}
