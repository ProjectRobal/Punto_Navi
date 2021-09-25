#ifndef SETTINGS_H
#define SETTINGS_H



#include <QWidget>
#include <QDateTime>
#include <QTimer>
#include <QScroller>
#include "menuentry.h"
#include "SetManager.h"

namespace Ui {
class Settings;
}

class Settings : public MenuEntry
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

    void connect(MainWindow *win) override;

private slots:
    void on_Exit_clicked();

    void on_Reset_clicked();

    void on_Save_clicked();

    void on_FM_clicked();

    void on_back_menu_clicked();

    void on_f_slide_valueChanged(int value);

    void on_rds_stateChanged(int arg1);

    void on_fm_on_stateChanged(int arg1);

    void on_gps_clicked();

private:
    Ui::Settings *ui;

    QMap <QString,QVariant> settings;

   // QTimer *clock;

   // QTimer *clock_updater;

   // bool time_modification;

    void update();

     void update_clock_time();

    int sec_to_up;

    QTime _time;
};

#endif // SETTINGS_H
