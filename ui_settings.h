/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *Reset;
    QPushButton *back_menu;
    QPushButton *Exit;
    QPushButton *Save;
    QStackedWidget *menu;
    QWidget *start;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QPushButton *connect;
    QPushButton *time;
    QPushButton *gps;
    QPushButton *other;
    QPushButton *audio;
    QPushButton *FM;
    QWidget *fm;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSlider *f_slide;
    QCheckBox *rds;
    QLabel *freq;
    QLabel *label;
    QCheckBox *fm_on;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(875, 479);
        Settings->setAutoFillBackground(false);
        Settings->setStyleSheet(QString::fromUtf8("#Settings\n"
"{\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"}\n"
"\n"
"QScrollArea\n"
"{\n"
"border: 1px solid white;\n"
"background-color:rgb(0, 0, 0);\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton , QCheckBox\n"
"{\n"
"border: 2px solid white;\n"
"background-color:qlineargradient(spread:reflect, x1:1, y1:0.318, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color:white;\n"
"\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"color:white;\n"
"}\n"
"\n"
"QRadioButton\n"
"{\n"
"background:black;\n"
"border: 2px solid white;\n"
"color:white;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked\n"
"{\n"
"background:black;\n"
"border:1px solid white;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked\n"
"{\n"
"background:white;\n"
"border:1px solid white;\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"background:black;\n"
"border: 2px solid white;\n"
"color:white;\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked\n"
"{\n"
"background:black;\n"
"border:1px solid white;\n"
"}\n"
"\n"
"QCheckBox::indicator::chec"
                        "ked\n"
"{\n"
"background:white;\n"
"border:1px solid white;\n"
"}\n"
"\n"
"QSlider::groove\n"
"{\n"
"	background:black;\n"
"	border:2px solid white;\n"
"	border-radius:4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal\n"
"{\n"
"	background:rgb(68, 68, 68);\n"
"	border:1px solid white;\n"
"	width:15px;\n"
"	height:15px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal\n"
"{\n"
"	background:white;\n"
"	border:1px solid white;\n"
"}"));
        gridLayout_2 = new QGridLayout(Settings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Reset = new QPushButton(Settings);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Reset, 3, 1, 1, 1);

        back_menu = new QPushButton(Settings);
        back_menu->setObjectName(QString::fromUtf8("back_menu"));

        gridLayout_2->addWidget(back_menu, 3, 3, 1, 1);

        Exit = new QPushButton(Settings);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Exit, 3, 2, 1, 1);

        Save = new QPushButton(Settings);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Save, 3, 0, 1, 1);

        menu = new QStackedWidget(Settings);
        menu->setObjectName(QString::fromUtf8("menu"));
        start = new QWidget();
        start->setObjectName(QString::fromUtf8("start"));
        gridLayout = new QGridLayout(start);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(start);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 823, 511));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setSpacing(50);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(50, 100, 50, 200);
        connect = new QPushButton(scrollAreaWidgetContents);
        connect->setObjectName(QString::fromUtf8("connect"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(connect->sizePolicy().hasHeightForWidth());
        connect->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        connect->setFont(font);

        gridLayout_3->addWidget(connect, 0, 2, 1, 1);

        time = new QPushButton(scrollAreaWidgetContents);
        time->setObjectName(QString::fromUtf8("time"));
        time->setFont(font);

        gridLayout_3->addWidget(time, 2, 0, 1, 1);

        gps = new QPushButton(scrollAreaWidgetContents);
        gps->setObjectName(QString::fromUtf8("gps"));
        sizePolicy.setHeightForWidth(gps->sizePolicy().hasHeightForWidth());
        gps->setSizePolicy(sizePolicy);
        gps->setFont(font);

        gridLayout_3->addWidget(gps, 1, 2, 1, 1);

        other = new QPushButton(scrollAreaWidgetContents);
        other->setObjectName(QString::fromUtf8("other"));
        other->setFont(font);

        gridLayout_3->addWidget(other, 2, 2, 1, 1);

        audio = new QPushButton(scrollAreaWidgetContents);
        audio->setObjectName(QString::fromUtf8("audio"));
        sizePolicy.setHeightForWidth(audio->sizePolicy().hasHeightForWidth());
        audio->setSizePolicy(sizePolicy);
        audio->setFont(font);
        audio->setFlat(false);

        gridLayout_3->addWidget(audio, 1, 0, 1, 1);

        FM = new QPushButton(scrollAreaWidgetContents);
        FM->setObjectName(QString::fromUtf8("FM"));
        sizePolicy.setHeightForWidth(FM->sizePolicy().hasHeightForWidth());
        FM->setSizePolicy(sizePolicy);
        FM->setFont(font);

        gridLayout_3->addWidget(FM, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        menu->addWidget(start);
        fm = new QWidget();
        fm->setObjectName(QString::fromUtf8("fm"));
        gridLayout_5 = new QGridLayout(fm);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_5->addItem(verticalSpacer_2, 4, 0, 1, 1);

        f_slide = new QSlider(fm);
        f_slide->setObjectName(QString::fromUtf8("f_slide"));
        f_slide->setStyleSheet(QString::fromUtf8(""));
        f_slide->setSliderPosition(0);
        f_slide->setOrientation(Qt::Horizontal);
        f_slide->setTickPosition(QSlider::TicksBothSides);

        gridLayout_5->addWidget(f_slide, 1, 0, 1, 2);

        rds = new QCheckBox(fm);
        rds->setObjectName(QString::fromUtf8("rds"));

        gridLayout_5->addWidget(rds, 3, 0, 1, 2);

        freq = new QLabel(fm);
        freq->setObjectName(QString::fromUtf8("freq"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(freq->sizePolicy().hasHeightForWidth());
        freq->setSizePolicy(sizePolicy1);
        freq->setFont(font);

        gridLayout_5->addWidget(freq, 0, 1, 1, 1);

        label = new QLabel(fm);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nakula"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        fm_on = new QCheckBox(fm);
        fm_on->setObjectName(QString::fromUtf8("fm_on"));

        gridLayout_5->addWidget(fm_on, 5, 0, 1, 2);

        menu->addWidget(fm);

        gridLayout_2->addWidget(menu, 0, 0, 1, 4);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", nullptr));
        Reset->setText(QApplication::translate("Settings", "Reset settings", nullptr));
        back_menu->setText(QApplication::translate("Settings", "Back", nullptr));
        Exit->setText(QApplication::translate("Settings", "Exit settings", nullptr));
        Save->setText(QApplication::translate("Settings", "Save settings", nullptr));
        connect->setText(QApplication::translate("Settings", "Connectivity", nullptr));
        time->setText(QApplication::translate("Settings", "Time", nullptr));
        gps->setText(QApplication::translate("Settings", "GPS", nullptr));
        other->setText(QApplication::translate("Settings", "Other", nullptr));
        audio->setText(QApplication::translate("Settings", "Audio", nullptr));
        FM->setText(QApplication::translate("Settings", "FM", nullptr));
        rds->setText(QApplication::translate("Settings", " Enable RDS", nullptr));
        freq->setText(QApplication::translate("Settings", "TextLabel", nullptr));
        label->setText(QApplication::translate("Settings", "Frequency:", nullptr));
        fm_on->setText(QApplication::translate("Settings", " Enable FM transmitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
