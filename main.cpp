#include "mainwindow.h"

#include <QApplication>
#include <QStackedWidget>


//#define RPI

bool read_style(QApplication &a,char* style_name)
{

    QFile file(style_name);

    if(file.open(QIODevice::ReadOnly))
    {

    a.setStyleSheet(file.readAll());

    file.close();

    return true;

    }

    return false;


}

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    bool s_found=false;

    for(int i=0;i<argc;i++)
    {
        if(!s_found)
        {
        s_found=strcmp("-style",argv[i])==0;
        }
        else
        {
            s_found=read_style(a,argv[i]);

            break;
        }
    }

    if(!s_found)
    {
        read_style(a,":/stylesheet/default.css");
    }



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
