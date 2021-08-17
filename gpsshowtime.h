#ifndef GPSSHOWTIME_H
#define GPSSHOWTIME_H


#include <QObject>
#include <QTimer>
#include <QGeoPositionInfo>
#include "menuentry.h"
#include "gps_data.h"


namespace Ui {
class GPSShowTime;
}

class GPSShowTime : public MenuEntry
{
    Q_OBJECT

public:
    explicit GPSShowTime(QWidget *parent = nullptr);
    ~GPSShowTime();

    void showEvent(QShowEvent *event) override;

    void connect(MainWindow *win) override;

private slots:
    void on_back_clicked();

    void show_info();

    void retrive_gps(const QGeoPositionInfo& info) override;


private:
    Ui::GPSShowTime *ui;

    QTimer *_get;

    QGeoPositionInfo gps;
};

#endif // GPSSHOWTIME_H
