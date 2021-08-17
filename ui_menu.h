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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <oclock.h>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *player;
    OClock *widget;
    QPushButton *android;
    QPushButton *settings;
    QPushButton *bluetooth;
    QPushButton *navi;

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
        player = new QPushButton(Menu);
        player->setObjectName(QString::fromUtf8("player"));
        player->setGeometry(QRect(350, 370, 100, 100));
        sizePolicy.setHeightForWidth(player->sizePolicy().hasHeightForWidth());
        player->setSizePolicy(sizePolicy);
        player->setAutoFillBackground(false);
        player->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        player->setIconSize(QSize(48, 48));
        widget = new OClock(Menu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(240, 10, 300, 300));
        widget->setStyleSheet(QString::fromUtf8(""));
        android = new QPushButton(Menu);
        android->setObjectName(QString::fromUtf8("android"));
        android->setEnabled(true);
        android->setGeometry(QRect(40, 300, 100, 100));
        sizePolicy.setHeightForWidth(android->sizePolicy().hasHeightForWidth());
        android->setSizePolicy(sizePolicy);
        android->setMinimumSize(QSize(40, 40));
        android->setSizeIncrement(QSize(0, 0));
        android->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        android->setIconSize(QSize(48, 48));
        android->setFlat(false);
        settings = new QPushButton(Menu);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(670, 300, 100, 100));
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        settings->setIconSize(QSize(48, 48));
        bluetooth = new QPushButton(Menu);
        bluetooth->setObjectName(QString::fromUtf8("bluetooth"));
        bluetooth->setGeometry(QRect(520, 340, 100, 100));
        sizePolicy.setHeightForWidth(bluetooth->sizePolicy().hasHeightForWidth());
        bluetooth->setSizePolicy(sizePolicy);
        bluetooth->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        bluetooth->setIconSize(QSize(48, 48));
        navi = new QPushButton(Menu);
        navi->setObjectName(QString::fromUtf8("navi"));
        navi->setGeometry(QRect(190, 340, 100, 100));
        sizePolicy.setHeightForWidth(navi->sizePolicy().hasHeightForWidth());
        navi->setSizePolicy(sizePolicy);
        navi->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);\n"
"border-radius:50%;\n"
"border-style:solid;\n"
"padding:20px;\n"
""));
        navi->setIconSize(QSize(48, 48));

        retranslateUi(Menu);

        android->setDefault(false);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", nullptr));
        player->setText(QString());
        android->setText(QString());
        settings->setText(QString());
        bluetooth->setText(QString());
        navi->setText(QApplication::translate("Menu", "Navi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
