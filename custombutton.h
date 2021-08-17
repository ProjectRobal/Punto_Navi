#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QAbstractButton>
#include <QPainter>
#include <QDebug>

enum Figure
{
    Rect,
    Round,
    Image
};

class CustomButton : public QAbstractButton
{
    Q_OBJECT

protected:
    Figure type;
    QRect bound;
    QBrush color;
    QPen pen;
    const QPixmap *pix;
    QBrush on_hoover;
    bool isHover;

public:



    void setBrush(QBrush b)
    {
        color=b;
    }

    void setHooverBrush(QBrush b)
    {
        on_hoover=b;
    }



    void setPen(QPen p)
    {
        pen=p;
    }

    explicit CustomButton();

    explicit CustomButton(const QPixmap& pm);

   explicit CustomButton(QString link);

    explicit CustomButton(Figure f,QRect rect);

    void setPixmap(QPixmap pm)
    {
       pix=new QPixmap(pm);

       //bound=pix->rect();

       type=Image;

       bound=pix->rect();

       pen=Qt::NoPen;
    }

    void setPixmap(QString link)
    {
       pix=new QPixmap(link);

       //bound=pix->rect();

       type=Image;

       bound=pix->rect();

       pen=Qt::NoPen;
    }

    void setFigure(Figure f,QRect rect)
    {
        type=f;
        bound=rect;

        pen=Qt::NoPen;
    }

    Figure FigureType()
    {
        return type;
    }
    QSize sizeHint() const
    {
        return bound.size();
    }

    protected:

    void hoverEnter(QHoverEvent *e)
    {
        Q_UNUSED(e);

        isHover=true;
    }

    void hoverLeave(QHoverEvent *e)
    {
         Q_UNUSED(e);

        isHover=false;
    }

    void paintEvent(QPaintEvent *e);
};

#endif // CUSTOMBUTTON_H
