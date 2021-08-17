#ifndef OCLOCK_H
#define OCLOCK_H

#include <QWidget>
#include <QDebug>
#include <QLabel>
#include <QTime>
#include <QImage>
#include <QPainter>
#include <QTimer>
#include <QOpenGLPaintDevice>
#include <cmath>
#include <hollowcircle.h>
#include <QKeyEvent>
#include <QFontDatabase>

class OClock : public QWidget
{
    Q_OBJECT

    QTime time;
   // QPainter *paint;
    QTimer *updater;
    QPixmap *ring;
    QPixmap *face;
    QOpenGLPaintDevice* device;
    int sec;
    int min;
    int hour;
    QPen pen;
    HollowCircle *circle1;
    HollowCircle *circle2;
    QPointF *arrow;
    int offset;
    bool pm;
    QString digital;
    QFont *digit;


    enum OColor
    {
    Red=qRgb(0, 57, 138),
    Blue=qRgb(167,2,48),
    Orange=qRgb(255, 136, 25)
    };


public:
    explicit OClock(QWidget *parent = nullptr);

    void move_up()
    {
        qDebug()<<sec<<" "<<min<<" "<<" "<<hour;
    offset+=60;
    }

    void move_down()
    {
        qDebug()<<sec<<" "<<min<<" "<<" "<<hour;
    offset-=60;
    }


protected:

void paintEvent(QPaintEvent *e);


signals:

protected slots:

    void update();

};

#endif // OCLOCK_H
