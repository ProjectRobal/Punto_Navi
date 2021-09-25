/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <oclock.h>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *android;
    OClock *widget;
    QPushButton *navi;
    QPushButton *bluetooth;
    QPushButton *player;
    QPushButton *settings;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setProperty("modal", QVariant(false));
        Menu->setWindowModality(Qt::NonModal);
        Menu->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setLayoutDirection(Qt::LeftToRight);
        Menu->setAutoFillBackground(false);
        Menu->setStyleSheet(QString::fromUtf8(""));
        Menu->setProperty("sizeGripEnabled", QVariant(true));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(Menu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        android = new QPushButton(frame);
        android->setObjectName(QString::fromUtf8("android"));
        android->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(android->sizePolicy().hasHeightForWidth());
        android->setSizePolicy(sizePolicy1);
        android->setMinimumSize(QSize(40, 40));
        android->setSizeIncrement(QSize(0, 0));
        android->setStyleSheet(QString::fromUtf8("background: rgb(0, 170, 0);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        android->setIconSize(QSize(48, 48));
        android->setFlat(false);

        gridLayout_2->addWidget(android, 2, 6, 1, 1);

        widget = new OClock(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setStyleSheet(QString::fromUtf8("background-color:black;\n"
""));

        gridLayout_2->addWidget(widget, 2, 8, 2, 3);

        navi = new QPushButton(frame);
        navi->setObjectName(QString::fromUtf8("navi"));
        sizePolicy1.setHeightForWidth(navi->sizePolicy().hasHeightForWidth());
        navi->setSizePolicy(sizePolicy1);
        navi->setStyleSheet(QString::fromUtf8("background: rgb(114, 159, 207);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        navi->setIconSize(QSize(48, 48));

        gridLayout_2->addWidget(navi, 2, 12, 1, 1);

        bluetooth = new QPushButton(frame);
        bluetooth->setObjectName(QString::fromUtf8("bluetooth"));
        sizePolicy1.setHeightForWidth(bluetooth->sizePolicy().hasHeightForWidth());
        bluetooth->setSizePolicy(sizePolicy1);
        bluetooth->setStyleSheet(QString::fromUtf8("background: rgb(211, 215, 207);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        bluetooth->setIconSize(QSize(48, 48));

        gridLayout_2->addWidget(bluetooth, 1, 11, 1, 1);

        player = new QPushButton(frame);
        player->setObjectName(QString::fromUtf8("player"));
        sizePolicy1.setHeightForWidth(player->sizePolicy().hasHeightForWidth());
        player->setSizePolicy(sizePolicy1);
        player->setAutoFillBackground(false);
        player->setStyleSheet(QString::fromUtf8("background: rgb(136, 138, 133);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        player->setIconSize(QSize(48, 48));

        gridLayout_2->addWidget(player, 0, 10, 1, 1);

        settings = new QPushButton(frame);
        settings->setObjectName(QString::fromUtf8("settings"));
        sizePolicy1.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy1);
        settings->setStyleSheet(QString::fromUtf8("background: rgb(136, 138, 133);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        settings->setIconSize(QSize(48, 48));

        gridLayout_2->addWidget(settings, 0, 7, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Menu);

        android->setDefault(false);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", nullptr));
        android->setText(QString());
        navi->setText(QApplication::translate("Menu", "Navi", nullptr));
        bluetooth->setText(QString());
        player->setText(QString());
        settings->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
