#ifndef MENUENTRY_H
#define MENUENTRY_H

#include <QWidget>
#include <QMainWindow>
#include <QGeoPositionInfo>


class MainWindow;

class MenuEntry : public QWidget
{
    Q_OBJECT
public:
    explicit MenuEntry(QWidget *parent = nullptr);

    virtual void connect(MainWindow* win);

signals:

    void back_to(int i);

    void reset_fm();

    void reset_rds();

    void rds_msg(QString msg);



public slots:

    virtual void retrive_gps(const QGeoPositionInfo& info){}

};

#endif // MENUENTRY_H
