#include "qmdj_dlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qmdj_dlg w;

	w.calc();

	w.show();
	
	return a.exec();
}
