#pragma once
#ifndef ANDROIDAUTO_H
#define ANDROIDAUTO_H

#include <QMouseEvent>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QObject>
#include <QThreadPool>
#include <QDebug>
#include <QGridLayout>
#include <QPainter>
#include <QLabel>
#include <QPixmap>
#include <QTimer>
#include "headunit.h"

class AndroidAuto : public QWidget
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.viktorgino.headunit.androidauto" FILE "config.json")
   // Q_INTERFACES(PluginInterface)
public:
     AndroidAuto(QWidget *parent = nullptr);
    QObject *getContextProperty();
    void init();

  //  void resizeEvent(QResizeEvent *event);

    void mousePressEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void resizeEvent(QResizeEvent *event);

    void closeEvent(QCloseEvent *event);

    void paintEvent(QPaintEvent* event);


signals:

public slots:
    //void eventMessage(QString id, QVariant message);

    void resizeVideo();

    void message(QVariant message);

    void status_info();

    void startAA();

    void stopAA();

    void waitAA();

    void load_aim();

private:
    Headunit* headunit;
    QString s_message;
    QPixmap logo;
    QFont font;
    bool is_waitting;
    uint8_t l_c;
   // QGridLayout* layout;
   // QWidget *view;
    QWidget *aa_screen;

    QTimer *try_auto;
    QTimer *loading_aim;
    //QWidget *dumy;
};

#endif // ANDROIDAUTO_H
