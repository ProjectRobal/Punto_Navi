#include "messagebox.h"
#include "ui_messagebox.h"

MessageBox::MessageBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageBox)
{
    ui->setupUi(this);

    this->setStyleSheet("* {background-color:white;}");

    ui->back->setStyleSheet("#back{background-color:black;}");

    //ui->ok->setStyleSheet("background-color:");

    this->hide();
}

MessageBox::~MessageBox()
{
    delete ui;
}

void MessageBox::setMessage(QString message)
{
    ui->msg->setText(message);
}

QString MessageBox::getMessage()
{
    return ui->msg->text();
}

void MessageBox::show_msg(QString message)
{
    setMessage(message);
    this->show();
}


void MessageBox::on_ok_clicked(QAbstractButton *button)
{
    this->hide();
}
