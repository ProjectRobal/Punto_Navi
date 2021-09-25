#include "menuentry.h"
#include "mainwindow.h"

MenuEntry::MenuEntry(QWidget *parent) : QWidget(parent)
{

}


void MenuEntry::connect(MainWindow *win)
{
    QObject::connect(this,&MenuEntry::back_to,win,&MainWindow::go_to_scene);

    QObject::connect(this,&MenuEntry::show_msg,win,&MainWindow::show_msg);
}
