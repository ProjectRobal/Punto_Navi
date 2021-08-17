#include "intro.h"

Intro::Intro(QWidget *parent) : MenuEntry(parent)
{
    //qDebug()<<"Intro size: "<<parent->width()<<" "<<parent->height();
    this->setFixedSize(800,480);


    wait1=new QTimer(this);

    label=new QLabel(this);

    label->setScaledContents(true);

    start_animation=  new QMovie(":/img/punto-nloop.gif");

   start_animation->setScaledSize(QSize(800,480));

    logo=new QImage(":/img/fiat-logo.jpg");

   logo=new QImage(logo->scaled(800,480,Qt::KeepAspectRatio));

    //this->addWidget(label);


    label->setMovie(start_animation);

    QObject::connect(start_animation,SIGNAL(finished()),this,SLOT(change_image()));

     QObject::connect(wait1,SIGNAL(timeout()),this,SLOT(end_anim()));

start();

//start_animation->start();


}


void Intro::change_image()
{

    label->setPixmap(QPixmap::fromImage(*logo));

        //start_animation->stop();

    wait1->start(2000);




    qDebug("Play change image");
}

void Intro::end_anim()
{
    wait1->stop();

    emit back_to(1);
}

void Intro::start()
{
    start_animation->start();
}

