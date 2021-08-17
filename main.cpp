#include "mainwindow.h"

#include <QApplication>
#include <QStackedWidget>

//#define RPI

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


#ifdef RPI

    QCursor cursor(Qt::BlankCursor);
    QApplication::setOverrideCursor(cursor);
    QApplication::changeOverrideCursor(cursor);

    MainWindow w;
    w.showFullScreen();
#else

    MainWindow w;
    w.show();

#endif

    return a.exec();
}
