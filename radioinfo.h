#ifndef RADIOINFO_H
#define RADIOINFO_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QColor>
#include "hollowcircle.h"

class RadioInfo : public QWidget
{
    Q_OBJECT
protected:

    QPixmap *ring;
    HollowCircle *inner;

public:
    explicit RadioInfo(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *e);

signals:

};

#endif // RADIOINFO_H
