#include "JaysMPlayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	JaysMPlayer w;
	w.show();
	return a.exec();
}
