#include "custombutton.h"

CustomButton::CustomButton()
{
    isHover=false;
    pen=Qt::NoPen;
}

CustomButton::CustomButton(const QPixmap& pm)
{
    setPixmap(pm);

    isHover=false;
}

CustomButton::CustomButton(QString link)
{
    setPixmap(link);

    isHover=false;
}

CustomButton::CustomButton(Figure f,QRect rect)
{
    setFigure(f,rect);

    isHover=false;
}

void CustomButton::paintEvent(QPaintEvent *e)
{
   Q_UNUSED(e);

    QPainter paint(this);

    //paint.translate(9,490);
    //paint.translate(this->width()/2,this->height()/2);

    paint.scale(this->width()/bound.width(),this->height()/bound.height());

    paint.setPen(pen);

    paint.setBrush(color);


    switch (type) {

    case Rect:

    paint.drawRect(bound);

        break;

    case Round:

    paint.drawEllipse(bound);

        break;

    case Image:

        paint.drawPixmap(bound,*pix);

        break;

    }

   // qDebug()<<this->width()<<" "<<this->height();
   // qDebug()<<this->bound;

    //qDebug()<<this->rect();


}



