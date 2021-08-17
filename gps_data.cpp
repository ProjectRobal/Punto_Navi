#include "gps_data.h"

GPS_info gps_informations;

GPS_data::GPS_data(QObject *parent) : QObject(parent)
{

    g_source=new QSerialGeoInfoSource(

            #ifdef RPI
                "/dev/ttyAMA0"

             #else

                "/dev/ttyUSB0"

            #endif
                ,this);

    g_source->start_serial();

    g_source->start_nmea_service();



    if(g_source)
    {
        connect(g_source,SIGNAL(positionUpdated(QGeoPositionInfo)),this,SLOT(pos_update(QGeoPositionInfo)));

        g_source->startUpdates();
    }

}


void GPS_data::pos_update(const QGeoPositionInfo &data)
{

    qDebug()<<"GPS data: "<<data;


    gps_informations.lat=data.coordinate().latitude();

    gps_informations.lon=data.coordinate().longitude();

    gps_informations.speed=data.attribute(QGeoPositionInfo::VerticalSpeed);




    emit gps_received(gps_informations);

}
