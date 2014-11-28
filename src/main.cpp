#include <QApplication>
#include "maindialogimpl.h"
//
int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	MainDialogImpl win;
	win.show(); 
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
