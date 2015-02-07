#ifndef QMDJ_DLG_H
#define QMDJ_DLG_H

#include <QtWidgets/QDialog>
#include "ui_qmdj_dlg.h"

class qmdj_dlg : public QDialog
{
	Q_OBJECT

public:
	qmdj_dlg(QWidget *parent = 0);
	~qmdj_dlg();

private:
	Ui::qmdj_dlgClass ui;
};

#endif // QMDJ_DLG_H
