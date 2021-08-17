#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    MenuEntry(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    back=QPixmap(":/img/stain.jpg");

    ui->android->setIcon(QIcon(":/img/icons/auto.ico"));
    ui->bluetooth->setIcon(QIcon(":/img/icons/bluetooth.ico"));
    ui->settings->setIcon(QIcon(":/img/icons/settings.ico"));
    ui->player->setIcon(QIcon(":/img/icons/player.ico"));
}

Menu::~Menu()
{
    delete ui;
}


void Menu::paintEvent(QPaintEvent *e)
{
   Q_UNUSED(e);

    QPainter paint(this);


    paint.drawPixmap(0,0,back);

}

void Menu::resizeEvent(QResizeEvent *re) {
    back  = back.scaled(re->size(),Qt::KeepAspectRatioByExpanding);
  }

void Menu::on_android_clicked()
{
    emit back_to(2);
}

void Menu::on_settings_clicked()
{
    emit back_to(3);
}
