#include "settings.h"
#include "ui_settings.h"
#include "mainwindow.h"



void setSystemTime(QTime _time)
{
    QString string = _time.toString("\"hh:mm:ss\"");
    QString dateTimeString ("date -s ");
    dateTimeString.append(string);
    int systemDateTimeStatus= system(dateTimeString.toStdString().c_str());
    if (systemDateTimeStatus == -1)
    {
        qDebug() << "Failed to change date time";
    }
    int systemHwClockStatus = system("/sbin/hwclock -w");
    if (systemHwClockStatus == -1 )
    {
        qDebug() << "Failed to sync hardware clock";
    }
}

void setSystemDate(QDate _date)
{
    QString string = _date.toString("\"yyyy-MM-dd\"");
    QString dateTimeString ("date -s ");
    dateTimeString.append(string);
    int systemDateTimeStatus= system(dateTimeString.toStdString().c_str());
    if (systemDateTimeStatus == -1)
    {
        qDebug() << "Failed to change date time";
    }
    int systemHwClockStatus = system("/sbin/hwclock -w");
    if (systemHwClockStatus == -1 )
    {
        qDebug() << "Failed to sync hardware clock";
    }
}

Qt::CheckState bool_to_check(bool in)
{

    return in ? Qt::Checked : Qt::Unchecked;

}

bool check_to_bool(Qt::CheckState state)
{

    return state==Qt::Checked;

}


Settings::Settings(QWidget *parent) :
    MenuEntry(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);



    //time_modification=false;

    sec_to_up=0;

    SetManager::check_settings();

     QSettings _settings(Set_File,QSettings::IniFormat);


    QStringList keys=_settings.allKeys();

    for(auto k : keys)
    {

        settings.insert(k,_settings.value(k).toString());

        qDebug()<<settings.lastKey()<<" "<<settings.last();
    }


    this->update();
}

Settings::~Settings()
{
    settings.clear();

    delete ui;
}

void Settings::connect(MainWindow *win)
{
       QObject::connect(this,&MenuEntry::back_to,win,&MainWindow::go_to_scene);

       QObject::connect(this,&MenuEntry::reset_fm,win,&MainWindow::turn_fm);

       QObject::connect(this,&MenuEntry::reset_rds,win,&MainWindow::turn_rds);

       QObject::connect(this,&MenuEntry::rds_msg,win,&MainWindow::rds_msg);

}

void Settings::on_Exit_clicked()
{
    back_to(1);
}



void Settings::update()
{

    QSettings _settings(Set_File,QSettings::IniFormat);

    //ui->freq->setText((QString::number(settings["fm/freq"].toFloat(),'g',4))+=" Mhz");

    //ui->fm_on->setCheckState(bool_to_check(_settings.value("fm/run").toBool()));

    //ui->rds_on->setCheckState(bool_to_check(_settings.value("fm/rds").toBool()));


}

void Settings::on_Reset_clicked()
{
    SetManager::set_default_settings();

    QSettings _settings(Set_File,QSettings::IniFormat);

    QStringList keys=_settings.allKeys();

    for(auto k : keys)
    {

        settings.insert(k,_settings.value(k).toString());

        qDebug()<<settings.lastKey()<<" "<<settings.last();
    }

    this->update();
}




void Settings::on_Save_clicked()
{


   QSettings _settings(Set_File,QSettings::IniFormat);

   QMap<QString,QVariant>::const_iterator i= settings.begin();

   while(i!=settings.constEnd())
   {

       qDebug()<<i.key()<<" "<<i.value();


    _settings.setValue(i.key(),i.value());

    i++;
   }

   emit reset_fm();
   emit reset_rds();

}
