#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class MessageBox;
}

class MessageBox : public QWidget
{
    Q_OBJECT

public:
    explicit MessageBox(QWidget *parent = nullptr);
    ~MessageBox();

    void setMessage(QString message);

    QString getMessage();

public slots:

    void show_msg(QString message);

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::MessageBox *ui;
};

#endif // MESSAGEBOX_H
