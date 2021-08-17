#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QDateTime>
#include <QTimer>
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