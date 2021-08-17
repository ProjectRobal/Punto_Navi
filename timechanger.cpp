#include "timechanger.h"
#include "ui_timechanger.h"

TimeChanger::TimeChanger(QWidget *parent) :
    MenuEntry(parent),
    ui(new Ui::TimeChanger)
{
    ui->setupUi((QDialog*)this);
}

TimeChanger::~TimeChanger()
{
    delete ui;
}

void TimeChanger::on_back_to_clicked()
{
    emit back_to(1);
}
