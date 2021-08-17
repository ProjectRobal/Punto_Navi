#ifndef GPS_DATA_H
#define GPS_DATA_H

//#define RPI


#include <QObject>
#include "qserialgeoinfosource.h"

struct GPS_info
{
    double lat;
    double lon;

    double speed;
};

extern GPS_info gps_informations;

class GPS_data : public QObject
{

    Q_OBJECT


protected:

    QSerialGeoInfoSource *g_source;



public:
    explicit GPS_data(QObject *parent = nullptr);



signals:

    void gps_received(GPS_info _info);

private slots:

    void pos_update(const QGeoPositionInfo &data);

};

#endif // GPS_DATA_H
