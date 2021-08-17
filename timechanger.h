#ifndef TIMECHANGER_H
#define TIMECHANGER_H

#include <QDialog>
#include <menuentry.h>

namespace Ui {
class TimeChanger;
}

class TimeChanger : public MenuEntry
{
    Q_OBJECT

public:
    explicit TimeChanger(QWidget *parent = nullptr);
    ~TimeChanger();

private slots:
    void on_back_to_clicked();

private:
    Ui::TimeChanger *ui;
};

#endif // TIMECHANGER_H
