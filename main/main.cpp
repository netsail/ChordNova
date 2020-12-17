// SmartChordGen v3.0 [Build: 2020.11.27]
// (c) 2020 Wenge Chen, Ji-woon Sim.
// main.cpp

#include <ctime>
#include <QApplication>
#include <QLayout>
#include "Interface.h"

int main(int argc, char *argv[])
{
	srand( (int)time(0) );
	QApplication app(argc, argv);
	Interface window;

	window.setWindowTitle("SmartChordGen v3.0.2020");
	window.setWindowIcon(QIcon("icons/icon.png"));
	window.show();

	return app.exec();
}
