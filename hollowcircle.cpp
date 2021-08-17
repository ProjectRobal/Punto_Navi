#include "hollowcircle.h"

HollowCircle::HollowCircle(int n_points,float o_rx,float o_ry,float i_rx,float i_ry)
{
    this->intializeHollowCircle(n_points,o_rx,o_ry,i_rx,i_ry);
}

HollowCircle::HollowCircle(int n_points,QPointF o_r,QPointF i_r)
{
    this->intializeHollowCircle(n_points,o_r,i_r);
}

void HollowCircle::intializeHollowCircle(int n_points,float o_rx,float o_ry,float i_rx,float i_ry)
{
    //QPointF* o_points;

    o_points=new QPointF[n_points+1];

    //float r=100;

   float a=(2*M_PI)/n_points;

   //qDebug()<<a;



    for(short i=0;i<n_points+1;i++)
    {
        o_points[i]=QPointF((sin(i*a)*o_rx),(cos(i*a)*o_ry));
    }

    //QPointF* i_points;

    i_points=new QPointF[n_points+1];

    for(short i=0;i<n_points+1;i++)
    {
        i_points[i]=QPointF((sin(i*(-a))*i_rx),(cos(i*(-a))*i_ry));
    }

   points=new QPointF[(n_points+1)*2];

    number_of_points=n_points;

    inner_radius.setX(i_rx);
    inner_radius.setY(i_ry);

    outer_radius.setX(o_rx);
    outer_radius.setY(o_ry);
}

void HollowCircle::intializeHollowCircle(int n_points,QPointF o_r,QPointF i_r)
{
this->intializeHollowCircle(n_points,o_r.x(),o_r.y(),i_r.x(),i_r.y());
}

void HollowCircle::drawHollowCircle(QPainter *p,int p_t_s)
{

    if(!p_t_s)
    {
        return;
    }

    if(p_t_s<0)
    {
    p_t_s=number_of_points;
    }

    if(p_t_s>number_of_points)
    {
    p_t_s=number_of_points;
    }

    /*QPointF* points;

    points=new QPointF[(n_points+1)*2];

    //float r=100;

   float a=(2*M_PI)/n_points;

   //qDebug()<<a;



    for(short i=0;i<n_points+1;i++)
    {
        points[i]=QPointF((sin(i*a)*o_r),(cos(i*a)*o_r));
    }

    int u=n_points+1;

   for(short i=n_points;i>=0;i--)
    {
        points[u]=QPointF((sin(i*a)*i_r),(cos(i*a)*i_r));

        u++;
    }

   p->drawPolygon(points,(n_points+1)*2);*/





       /* QPointF* o_points;

        o_points=new QPointF[n_points+1];

        //float r=100;

       float a=(2*M_PI)/n_points;

       //qDebug()<<a;



        for(short i=0;i<n_points+1;i++)
        {
            o_points[i]=QPointF((sin(i*a)*o_rx),(cos(i*a)*o_ry));
        }

        QPointF* i_points;

        i_points=new QPointF[n_points+1];

        for(short i=0;i<n_points+1;i++)
        {
            i_points[i]=QPointF((sin(i*(-a))*i_rx),(cos(i*(-a))*i_ry));
        }
        */

      //  p->drawPolygon(o_points,n_points);

       // p->setBrush(QBrush(qRgb(255,0,0)));

       // p->drawPolygon(i_points,n_points);







        memmove(points,o_points,(p_t_s+1)*sizeof(QPointF));

        memmove(points+p_t_s+1,i_points+(number_of_points-p_t_s),(p_t_s+1)*sizeof(QPointF));

       /* for(int i=0;i<(n_points+1)*2;i++)
        {
            qDebug()<<points[i];
        }*/



         p->drawPolygon(points,(p_t_s+1)*2);
}


QPointF HollowCircle::get_outer_radius()
{
    return outer_radius;
}

QPointF HollowCircle::get_inner_radius()
{
    return inner_radius;
}

int HollowCircle::get_number_of_points()
{
    return number_of_points;
}



