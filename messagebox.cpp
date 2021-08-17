#include "messagebox.h"
#include "ui_messagebox.h"

MessageBox::MessageBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageBox)
{
    ui->setupUi(this);

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



void MessageBox::on_buttonBox_clicked(QAbstractButton *button)
{
this->hide();
}
