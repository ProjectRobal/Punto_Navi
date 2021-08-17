#ifndef SETMANAGER_H
#define SETMANAGER_H

#endif // SETMANAGER_H

#define MAX_FREQ 108.f
#define MIN_FREQ 76.f

#define Set_File "./punto_navi.ini"


#include <QFile>
#include <QSettings>
#include <QDebug>

#define get_settings QSettings _settings(Set_File,QSettings::IniFormat);


class SetManager
{

public:

   static void set_default_settings()
    {
        QSettings _settings(Set_File,QSettings::IniFormat);

        _settings.setValue("fm/freq",96.0);

        _settings.setValue("fm/rds",true);

        _settings.setValue("fm/run",true);

    }

  static  bool settings_exits()
    {

      return QFile(Set_File).exists();


    }

  static void check_settings()
  {

    if(!settings_exits())
    {
        qDebug()<<"Settings don't exits, reset settings";
        set_default_settings();

    }
  }


};
