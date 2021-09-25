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
#include <QtWidgets/QHBoxLayout>
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
    QPushButton *Exit;
    QPushButton *Reset;
    QPushButton *back_menu;
    QStackedWidget *menu;
    QWidget *start;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QPushButton *time;
    QPushButton *other;
    QPushButton *gps;
    QPushButton *audio;
    QPushButton *connect;
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
    QPushButton *Save;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(875, 479);
        Settings->setAutoFillBackground(false);
        Settings->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(Settings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Exit = new QPushButton(Settings);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Exit->sizePolicy().hasHeightForWidth());
        Exit->setSizePolicy(sizePolicy);
        Exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Exit, 3, 2, 1, 1);

        Reset = new QPushButton(Settings);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        sizePolicy.setHeightForWidth(Reset->sizePolicy().hasHeightForWidth());
        Reset->setSizePolicy(sizePolicy);
        Reset->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Reset, 3, 1, 1, 1);

        back_menu = new QPushButton(Settings);
        back_menu->setObjectName(QString::fromUtf8("back_menu"));
        sizePolicy.setHeightForWidth(back_menu->sizePolicy().hasHeightForWidth());
        back_menu->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(back_menu, 3, 3, 1, 1);

        menu = new QStackedWidget(Settings);
        menu->setObjectName(QString::fromUtf8("menu"));
        start = new QWidget();
        start->setObjectName(QString::fromUtf8("start"));
        gridLayout = new QGridLayout(start);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(start);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setLineWidth(1);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(false);
        scrollArea->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 4, 3000, 350));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        time = new QPushButton(scrollAreaWidgetContents);
        time->setObjectName(QString::fromUtf8("time"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(time->sizePolicy().hasHeightForWidth());
        time->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(20);
        time->setFont(font);

        horizontalLayout->addWidget(time);

        other = new QPushButton(scrollAreaWidgetContents);
        other->setObjectName(QString::fromUtf8("other"));
        sizePolicy2.setHeightForWidth(other->sizePolicy().hasHeightForWidth());
        other->setSizePolicy(sizePolicy2);
        other->setFont(font);

        horizontalLayout->addWidget(other);

        gps = new QPushButton(scrollAreaWidgetContents);
        gps->setObjectName(QString::fromUtf8("gps"));
        sizePolicy2.setHeightForWidth(gps->sizePolicy().hasHeightForWidth());
        gps->setSizePolicy(sizePolicy2);
        gps->setFont(font);

        horizontalLayout->addWidget(gps);

        audio = new QPushButton(scrollAreaWidgetContents);
        audio->setObjectName(QString::fromUtf8("audio"));
        sizePolicy2.setHeightForWidth(audio->sizePolicy().hasHeightForWidth());
        audio->setSizePolicy(sizePolicy2);
        audio->setFont(font);
        audio->setFlat(false);

        horizontalLayout->addWidget(audio);

        connect = new QPushButton(scrollAreaWidgetContents);
        connect->setObjectName(QString::fromUtf8("connect"));
        sizePolicy2.setHeightForWidth(connect->sizePolicy().hasHeightForWidth());
        connect->setSizePolicy(sizePolicy2);
        connect->setFont(font);

        horizontalLayout->addWidget(connect);

        FM = new QPushButton(scrollAreaWidgetContents);
        FM->setObjectName(QString::fromUtf8("FM"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(FM->sizePolicy().hasHeightForWidth());
        FM->setSizePolicy(sizePolicy3);
        FM->setFont(font);

        horizontalLayout->addWidget(FM);

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
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(freq->sizePolicy().hasHeightForWidth());
        freq->setSizePolicy(sizePolicy4);
        freq->setFont(font);

        gridLayout_5->addWidget(freq, 0, 1, 1, 1);

        label = new QLabel(fm);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
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

        Save = new QPushButton(Settings);
        Save->setObjectName(QString::fromUtf8("Save"));
        sizePolicy.setHeightForWidth(Save->sizePolicy().hasHeightForWidth());
        Save->setSizePolicy(sizePolicy);
        Save->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Save, 3, 0, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", nullptr));
        Exit->setText(QApplication::translate("Settings", "Exit settings", nullptr));
        Reset->setText(QApplication::translate("Settings", "Reset settings", nullptr));
        back_menu->setText(QApplication::translate("Settings", "Back", nullptr));
        time->setText(QApplication::translate("Settings", "Time", nullptr));
        other->setText(QApplication::translate("Settings", "Other", nullptr));
        gps->setText(QApplication::translate("Settings", "GPS", nullptr));
        audio->setText(QApplication::translate("Settings", "Audio", nullptr));
        connect->setText(QApplication::translate("Settings", "Connectivity", nullptr));
        FM->setText(QApplication::translate("Settings", "FM", nullptr));
        rds->setText(QApplication::translate("Settings", " Enable RDS", nullptr));
        freq->setText(QApplication::translate("Settings", "TextLabel", nullptr));
        label->setText(QApplication::translate("Settings", "Frequency:", nullptr));
        fm_on->setText(QApplication::translate("Settings", " Enable FM transmitter", nullptr));
        Save->setText(QApplication::translate("Settings", "Save settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
