#include "jukebox.h"
#include "ui_jukebox.h"

JukeBox::JukeBox(QWidget *parent) :
    MenuEntry(parent),
    ui(new Ui::JukeBox)
{
    ui->setupUi(this);
}

JukeBox::~JukeBox()
{
    delete ui;
}

void JukeBox::on_exit_clicked()
{
    emit back_to(1);
}
