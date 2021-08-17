#pragma once
#ifndef AA_HEADUNIT_H
#define AA_HEADUNIT_H

#include "menuentry.h"
#include "androidauto.h"

namespace Ui {
class AA_Headunit;
}

class AA_Headunit : public MenuEntry
{
    Q_OBJECT

public:
    explicit AA_Headunit(QWidget *parent = nullptr);
    void showEvent(QShowEvent*event);
    ~AA_Headunit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AA_Headunit *ui;

    //AndroidAuto *server;
};

#endif // AA_HEADUNIT_H
