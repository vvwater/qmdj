#ifndef QMDJ_H
#define QMDJ_H

#include <QtWidgets/QMainWindow>
#include "ui_qmdj.h"

class qmdj : public QMainWindow
{
	Q_OBJECT

public:
	qmdj(QWidget *parent = 0);
	~qmdj();

private:
	Ui::qmdjClass ui;
};

#endif // QMDJ_H
