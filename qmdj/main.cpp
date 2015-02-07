#include "qmdj.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qmdj w;
	w.show();
	return a.exec();
}
