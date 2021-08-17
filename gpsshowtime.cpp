#include "gpsshowtime.h"
#include "ui_gpsshowtime.h"
#include "mainwindow.h"


//GPS_info gps_informations;

GPSShowTime::GPSShowTime(QWidget *parent) :
    MenuEntry(parent),
    ui(new Ui::GPSShowTime)
{

    _get=new QTimer(this);

   QObject::connect(_get,SIGNAL(timeout()),this,SLOT(show_info()));




    ui->setupUi(this);



    _get->start(250);
}

void GPSShowTime::showEvent(QShowEvent *event)
{



}

GPSShowTime::~GPSShowTime()
{

    delete ui;
}

void GPSShowTime::on_back_clicked()
{
    emit back_to(3);
}

void GPSShowTime::show_info()
{

   ui->position->setText("Geo Position Lat: "+QString::number(gps.coordinate().latitude())+" Lon: "+QString::number(gps.coordinate().longitude()));

    ui->speed->setText("Current speed "+QString::number(gps.attribute(QGeoPositionInfo::GroundSpeed))+" m/s");

   // qDebug()<<"Data showed";
//    qDebug()<<"Geo Position Lat: "+QString::number(gps.lat)+" Lon: "+QString::number(gps.lon);
//    qDebug()<<"Current speed "+QString::number(gps.speed)+" m/s";

}

void GPSShowTime::connect(MainWindow *win)
{
    QObject::connect(this,&MenuEntry::back_to,win,&MainWindow::go_to_scene);
    QObject::connect(win,&MainWindow::emit_gps,this,&MenuEntry::retrive_gps);
    QObject::connect(win,&MainWindow::emit_gps_error,this,&GPSShowTime::get_error);
}

void GPSShowTime::retrive_gps(const QGeoPositionInfo& info)
{
    gps=info;
}

void GPSShowTime::get_error(QGeoPositionInfoSource::Error e)
{

}
