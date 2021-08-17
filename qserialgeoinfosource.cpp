#include "qserialgeoinfosource.h"

QSerialGeoInfoSource::QSerialGeoInfoSource(QString tty,QObject *parent) : QNmeaPositionInfoSource(UpdateMode::RealTimeMode,parent)
{

    ServiceRunning=false;

    SerialOpen=false;

    device=new QSerialPort(tty,this);

    QObject::connect(device,SIGNAL(errorOccurred(QSerialPort::SerialPortError)),this,SLOT(serial_error(QSerialPort::SerialPortError)));

    device->setBaudRate(9600);

    device->setStopBits(QSerialPort::StopBits::OneStop);

    device->setParity(QSerialPort::Parity::NoParity);

}


void QSerialGeoInfoSource::start_serial()
{

    device->open(QIODevice::ReadWrite);

    if(device->error()==QSerialPort::SerialPortError::NoError)
    {
    SerialOpen=true;
    }
    else
    {
        SerialOpen=false;
    }

}

void QSerialGeoInfoSource::stop_serial()
{

    device->close();
}

void QSerialGeoInfoSource::start_nmea_service()
{

    if(SerialOpen)
    {

        this->setDevice(device);

        device->write("?WATCH={\"enable\":true, \"nmea\":true}\n");

        if(device->error()==QSerialPort::SerialPortError::NoError)
        {
        ServiceRunning=true;
        }
        else
        {
            ServiceRunning=false;
        }

    }

}

void QSerialGeoInfoSource::stop_nmea_service()
{

    if(ServiceRunning)
    {

        device->write("?WATCH={\"enable\": false}\n");

        if(device->error()==QSerialPort::SerialPortError::NoError)
        {
        ServiceRunning=false;
        }

    }

}

void QSerialGeoInfoSource::serial_error(QSerialPort::SerialPortError error)
{

    qDebug()<<error;

}

QSerialGeoInfoSource::~QSerialGeoInfoSource()
{

stop_nmea_service();
stop_serial();

delete device;

}
