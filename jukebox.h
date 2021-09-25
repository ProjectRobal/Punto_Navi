#ifndef JUKEBOX_H
#define JUKEBOX_H

#include "menuentry.h"

namespace Ui {
class JukeBox;
}

class JukeBox : public MenuEntry
{
    Q_OBJECT

public:
    explicit JukeBox(QWidget *parent = nullptr);
    ~JukeBox();



private slots:
    void on_exit_clicked();

private:
    Ui::JukeBox *ui;


};

#endif // JUKEBOX_H
