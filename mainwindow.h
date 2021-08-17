#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define SUSPEND_TIMEOUT 180000



#include "menuentry.h"
#include <QMainWindow>
#include <QStackedWidget>
#include <QDebug>
#include <QString>
#include <QtGui>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QProcess>
#include <QLocalSocket>
#include <QPointer>
#include "settings.h"
#include "timechanger.h"

#define rds_pip QString("rds_ctl")

#define FM_prog QString("sudo arecord -fS16_LE -r 44100 -Dplughw:1,0 -c 2 -  | sudo ./pi_fm_adv --audio -")








QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Intro *intro;
    QRect *screen_size;
   // QStackedWidget *stack;
    QTimer *lazy;
    MenuEntry *n_widget;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

    void emit_gps(const QGeoPositionInfo &info);

public slots:

   // void set_default_settings();

    void go_to_scene(int i);

    void back_to_clock();

    void turn_rds();

    void turn_fm();

    void fm_error(QProcess::ProcessError error);

    void rds_error(QLocalSocket::LocalSocketError socketError);

    void rds_msg(QString msg);

    void look_gps(const QGeoPositionInfo &info);


protected:
    void keyPressEvent(QKeyEvent *);

  //  void mousePressEvent(QMouseEvent *e);

    void touchEvent(QTouchEvent *e);

    void allocate_widget(int w);

    void start_fm();



private:
    Ui::MainWindow *ui;
    QProcess *fmrpi;
    QLocalSocket *s_rds;
    QGeoPositionInfoSource *gps_info;
};
#endif // MAINWINDOW_H