#include "radioinfo.h"

RadioInfo::RadioInfo(QWidget *parent) : QWidget(parent)
{
    ring=new QPixmap(":/fancy-ring.png");

    inner=new HollowCircle(60,253,-253,240,-240);
}

void RadioInfo::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

     QPainter paint(this);

     QPen pen;

     pen.setColor(Qt::black);

     paint.setPen(pen);

    // qDebug()<<this->width()<<" "<<this->height();

    // qDebug()<<float(this->width())/676.0<<" "<<float(this->height())/676.0;

     paint.translate(this->width()/2,this->height()/2);

     paint.scale(this->width()/676.0,this->height()/676.0);



     paint.drawPixmap(QRect(-676/2,-676/2,676,676),*ring);



     //paint.drawPixmap(QRect(-676*0.7/2,-676*0.7/2,676*0.7,676*0.7),*face);





     paint.drawRoundedRect(QRectF(-40,-80,80,30),3,3);

    // paint.setBrush(QBrush(qRgb(0,0,0)));


    QFont font=paint.font();
    font.setPointSize(20);
    paint.setFont(font);





    pen.setColor(Qt::black);

    paint.setPen(pen);




     //paint.setBrush(QBrush(OColor::Red));

     paint.setBrush(QBrush(Qt::blue));

     inner->drawHollowCircle(&paint,10);


    // paint.setBrush(QBrush(Qt::black));

}
