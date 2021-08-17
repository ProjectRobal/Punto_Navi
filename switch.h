#ifndef SWITCH_H
#define SWITCH_H

#include "custombutton.h"
#include <QObject>

class Switch : public CustomButton
{
    Q_OBJECT

protected:
    int scene;

    void set_link()
    {
        QObject::connect(this,SIGNAL(clicked()),this,SLOT(_switch()));
    }
public:
    Switch();
    Switch(int _scene);
    Switch(int _scene,const QPixmap& pm);
    Switch(int _scene,QString link);
    Switch(int _scene,Figure f,QRect rect);

    public slots:

    void _switch()
    {
        emit switched(scene);
    }

    void setScene(int _scene)
    {
        scene=_scene;
    }

    int _scene()
    {
        return scene;
    }

signals:

    void switched(int i);
};

#endif // SWITCH_H
