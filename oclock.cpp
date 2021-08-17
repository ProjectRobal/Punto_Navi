#include "oclock.h"

OClock::OClock(QWidget *parent) : QWidget(parent)
{
    pm=false;

    int id = QFontDatabase::addApplicationFont(":/digital-7.ttf");

    digit=new QFont(QFontDatabase::applicationFontFamilies(id).at(0),24);



    //qDebug()<<this->width()<<" "<<this->height();
    arrow=new QPointF[3];

    arrow[0]=QPointF(0,-202);
    arrow[1]=QPointF(3.4,-34);
    arrow[2]=QPointF(-3.4,-34);

    sec=0;
    min=0;
    hour=0;
    offset=0;

    time=QTime::currentTime();

    pen.setWidth(0);

    pen.setColor(Qt::black);

    sec=time.second();
    min=time.minute();

    if(time.hour()>12)
    {
    hour=time.hour()-12;
    pm=true;
    }
    else
    {
        pm=false;
    }

    hour=360*(hour/12.f);

    hour+=30*(min/59.f);

    updater=new QTimer(this);

    ring=new QPixmap(":/fancy-ring.png");

    face=new QPixmap(":/clock-face.png");

    //qDebug()<<ring->width()<<" "<<ring->height();

    circle1=new HollowCircle(60,253,-253,240,-240);
    circle2=new HollowCircle(60,246,-246,240,-240);

    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(update()));

    updater->start(1000);

}

void OClock::paintEvent(QPaintEvent *e)
{
   Q_UNUSED(e);

    QPainter paint(this);

    pen.setColor(Qt::black);

    paint.setPen(pen);

   // qDebug()<<this->width()<<" "<<this->height();

   // qDebug()<<float(this->width())/676.0<<" "<<float(this->height())/676.0;

    paint.translate(this->width()/2,this->height()/2);

    paint.scale(this->width()/676.0,this->height()/676.0);



    paint.drawPixmap(QRect(-676/2,-676/2,676,676),*ring);



    paint.drawPixmap(QRect(-676*0.7/2,-676*0.7/2,676*0.7,676*0.7),*face);






    paint.setBrush(QBrush(OColor::Orange));


    paint.drawRoundedRect(QRectF(-40,-80,80,30),3,3);

    paint.setPen(pen);

   // paint.setBrush(QBrush(qRgb(0,0,0)));

   paint.setFont(*digit);

   paint.drawText(QRectF(-40,-80,80,30),Qt::AlignCenter, digital);


   if(!pm){pen.setColor(QColor(OColor::Blue));}
   else {pen.setColor(QColor(OColor::Red));}



    paint.setPen(pen);

   // paint.setBrush(QBrush(qRgb(0,0,0)));


   QFont font=paint.font();
   font.setPointSize(20);
   paint.setFont(font);


   if(pm){paint.drawText(QPointF(60,0), "PM");}
   else {paint.drawText(QPointF(60,0), "AM");}





   pen.setColor(Qt::black);

   paint.setPen(pen);




    paint.setBrush(QBrush(OColor::Red));

    circle1->drawHollowCircle(&paint,min);

    paint.setBrush(QBrush(OColor::Blue));

    circle2->drawHollowCircle(&paint,sec);



    pen.setColor(Qt::gray);

    paint.setPen(pen);

    paint.setBrush(QBrush(Qt::black));

    paint.drawEllipse(QPointF(0,0),34,34);



    pen.setColor(QColor(OColor::Blue));

    paint.setPen(pen);

    paint.setBrush(QBrush(OColor::Blue));

    paint.rotate(hour);

    paint.drawPolygon(arrow,3);



}


void OClock::update()
{
   // qDebug()<<offset;

    time=QTime::currentTime();

    time=time.addSecs(offset);

    sec=time.second();
    min=time.minute();

    hour=time.hour();

    digital=QString::number(hour)+":";

    if(min<10)
    {
    digital+=("0"+QString::number(min));
    }
    else
    {
    digital+=QString::number(min);
    }

    if(time.hour()>12)
    {
    hour=time.hour()-12;
    pm=true;
    }
    else
    {
        pm=false;
    }

    hour=360*(hour/12.f);

    hour+=30*(min/59.f);

    this->repaint();


}


