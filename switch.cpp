#include "switch.h"

Switch::Switch()
    :CustomButton()
{
    scene=0;
    set_link();
}

Switch::Switch(int _scene)
    :CustomButton()
{
    scene=_scene;
     set_link();
}


Switch::Switch(int _scene,const QPixmap& pm)
    :CustomButton(pm)
{
    scene=_scene;
     set_link();
}


Switch::Switch(int _scene,QString link)
    :CustomButton(link)
{
    scene=_scene;
     set_link();
}


Switch::Switch(int _scene,Figure f,QRect rect)
    :CustomButton(f,rect)
{
    scene=_scene;
     set_link();
}
