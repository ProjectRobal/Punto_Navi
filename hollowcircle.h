#ifndef HOLLOWCIRCLE_H
#define HOLLOWCIRCLE_H

#include <QPainter>
#include <cmath>

class HollowCircle
{
    QPointF* points;
    QPointF* o_points;
    QPointF* i_points;
    int number_of_points;
    QPointF inner_radius;
    QPointF outer_radius;

public:
    HollowCircle(int n_points,float o_rx,float o_ry,float i_rx,float i_ry);

    HollowCircle(int n_points,QPointF o_r,QPointF i_r);

    void intializeHollowCircle(int n_points,float o_rx,float o_ry,float i_rx,float i_ry);

    void intializeHollowCircle(int n_points,QPointF o_r,QPointF i_r);

    void drawHollowCircle(QPainter *p,int p_t_s=-1);

    QPointF get_outer_radius();

    QPointF get_inner_radius();

    int get_number_of_points();


};

#endif // HOLLOWCIRCLE_H
