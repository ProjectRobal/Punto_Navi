/********************************************************************************
** Form generated from reading UI file 'gpsshowtime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSSHOWTIME_H
#define UI_GPSSHOWTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPSShowTime
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *back;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *position;
    QLabel *speed;

    void setupUi(QWidget *GPSShowTime)
    {
        if (GPSShowTime->objectName().isEmpty())
            GPSShowTime->setObjectName(QString::fromUtf8("GPSShowTime"));
        GPSShowTime->resize(800, 600);
        GPSShowTime->setStyleSheet(QString::fromUtf8("color:white;"));
        gridLayout = new QGridLayout(GPSShowTime);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        back = new QPushButton(GPSShowTime);
        back->setObjectName(QString::fromUtf8("back"));
        back->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"border-radius:10%;\n"
"background-color:rgb(46, 52, 54);"));

        gridLayout->addWidget(back, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(650, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 1, 1, 1);

        label = new QLabel(GPSShowTime);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        position = new QLabel(GPSShowTime);
        position->setObjectName(QString::fromUtf8("position"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(16);
        position->setFont(font1);

        gridLayout->addWidget(position, 2, 0, 1, 2);

        speed = new QLabel(GPSShowTime);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setFont(font1);

        gridLayout->addWidget(speed, 4, 0, 1, 2);


        retranslateUi(GPSShowTime);

        QMetaObject::connectSlotsByName(GPSShowTime);
    } // setupUi

    void retranslateUi(QWidget *GPSShowTime)
    {
        GPSShowTime->setWindowTitle(QApplication::translate("GPSShowTime", "Form", nullptr));
        back->setText(QApplication::translate("GPSShowTime", "Back", nullptr));
        label->setText(QApplication::translate("GPSShowTime", "GPS informations", nullptr));
        position->setText(QApplication::translate("GPSShowTime", "TextLabel", nullptr));
        speed->setText(QApplication::translate("GPSShowTime", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPSShowTime: public Ui_GPSShowTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSSHOWTIME_H
