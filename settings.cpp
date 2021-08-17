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

int freq_to_position(float freq)
{

    return (((freq-MIN_FREQ)/(MAX_FREQ-MIN_FREQ))*100.f)-1;

}

float position_to_freq(int pos)
{
    return (((pos+1)/100.f)*(MAX_FREQ-MIN_FREQ))+MIN_FREQ;
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

    ui->freq->setText((QString::number(settings["fm/freq"].toFloat(),'g',4))+=" Mhz");

    ui->f_slide->setSliderPosition(freq_to_position(settings["fm/freq"].toFloat()));

    ui->fm_on->setCheckState(bool_to_check(settings.value("fm/run").toBool()));

    ui->rds->setCheckState(bool_to_check(settings.value("fm/rds").toBool()));


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

void Settings::on_FM_clicked()
{
    ui->menu->setCurrentIndex(1);
}

void Settings::on_back_menu_clicked()
{
    ui->menu->setCurrentIndex(0);
}


void Settings::on_f_slide_valueChanged(int value)
{
    settings["fm/freq"]=position_to_freq(value);

    this->update();
}

void Settings::on_rds_stateChanged(int arg1)
{
    settings["fm/rds"]=check_to_bool((Qt::CheckState)arg1);

    this->update();
}

void Settings::on_fm_on_stateChanged(int arg1)
{
    settings["fm/run"]=check_to_bool((Qt::CheckState)arg1);

    this->update();
}
