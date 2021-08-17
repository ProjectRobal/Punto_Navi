#ifndef QSERIALGEOINFOSOURCE_H
#define QSERIALGEOINFOSOURCE_H

#include <QObject>
#include <QDebug>
#include <QSerialPort>
#include <QNmeaPositionInfoSource>


class QSerialGeoInfoSource : public QNmeaPositionInfoSource
{
    Q_OBJECT
protected:

        QSerialPort *device;
        bool ServiceRunning;
        bool SerialOpen;

public:
    explicit QSerialGeoInfoSource(QString tty,QObject *parent = nullptr);

        void start_serial();

        void stop_serial();

        void start_nmea_service();

        void stop_nmea_service();

        ~QSerialGeoInfoSource();

private slots:

        void serial_error(QSerialPort::SerialPortError error);

signals:

};

#endif // QSERIALGEOINFOSOURCE_H
