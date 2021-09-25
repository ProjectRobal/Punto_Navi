#include "aa_headunit.h"
#include "ui_aa_headunit.h"

AA_Headunit::AA_Headunit(QWidget *parent) :
    MenuEntry(parent),
    ui(new Ui::AA_Headunit)
{
    ui->setupUi(this);

    QObject::connect(ui->server,&AndroidAuto::return_to_menu,this,&AA_Headunit::on_pushButton_clicked);
}

void AA_Headunit::showEvent(QShowEvent *event)
{
   // server=new AndroidAuto();

    // ui->gridLayout->addWidget(server,0,1,4,Qt::AlignCenter);

    ui->server->init();

     ui->server->startAA();


}

AA_Headunit::~AA_Headunit()
{
    delete ui;

}

void AA_Headunit::on_pushButton_clicked()
{
    ui->server->stopAA();

    emit back_to(1);
}

void AA_Headunit::connection_failure()
{
    emit show_msg("To many failed attempt to connect");

    this->on_pushButton_clicked();
}

