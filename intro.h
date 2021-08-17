#pragma once
#ifndef INTRO_H
#define INTRO_H

#include "menuentry.h"
#include <QMovie>
#include <QPicture>
#include <QDebug>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QTimer>



class Intro : public MenuEntry
{
    Q_OBJECT
    QMovie *start_animation;
    QLabel *label;
    QImage *logo;
    QTimer *wait1;
public:
    explicit Intro(QWidget *parent = nullptr);

    void start();


signals:

private slots:

    void change_image();

    void end_anim();

signals:

  //  void ended(int i);

public slots:





};

#endif // INTRO_H
