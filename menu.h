#pragma once
#ifndef MENU_H
#define MENU_H

#include "menuentry.h"
#include <QImage>
#include <QPainter>




namespace Ui {
class Menu;
}

class Menu : public MenuEntry
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

   // void connect(MainWindow* win);

protected:

    QPixmap back;

    void paintEvent(QPaintEvent *e);

    void resizeEvent(QResizeEvent *re);


private slots:
    void on_android_clicked();

    void on_settings_clicked();



    void on_player_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
