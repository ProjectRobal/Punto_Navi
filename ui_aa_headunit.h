/********************************************************************************
** Form generated from reading UI file 'aa_headunit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AA_HEADUNIT_H
#define UI_AA_HEADUNIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <androidauto.h>

QT_BEGIN_NAMESPACE

class Ui_AA_Headunit
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    AndroidAuto *server;
    QLabel *auto_msg;
    QLabel *auto_icon;

    void setupUi(QWidget *AA_Headunit)
    {
        if (AA_Headunit->objectName().isEmpty())
            AA_Headunit->setObjectName(QString::fromUtf8("AA_Headunit"));
        AA_Headunit->resize(800, 480);
        AA_Headunit->setCursor(QCursor(Qt::SizeVerCursor));
        AA_Headunit->setAutoFillBackground(false);
        AA_Headunit->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(AA_Headunit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(AA_Headunit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"border-radius:10%;\n"
"color:white;"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(650, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        server = new AndroidAuto(AA_Headunit);
        server->setObjectName(QString::fromUtf8("server"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(server->sizePolicy().hasHeightForWidth());
        server->setSizePolicy(sizePolicy1);
        auto_msg = new QLabel(server);
        auto_msg->setObjectName(QString::fromUtf8("auto_msg"));
        auto_msg->setGeometry(QRect(154, 290, 491, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        auto_msg->setFont(font);
        auto_msg->setStyleSheet(QString::fromUtf8("color:white;"));
        auto_msg->setAlignment(Qt::AlignCenter);
        auto_icon = new QLabel(server);
        auto_icon->setObjectName(QString::fromUtf8("auto_icon"));
        auto_icon->setGeometry(QRect(254, 40, 291, 231));
        auto_icon->setPixmap(QPixmap(QString::fromUtf8(":/img/auto.png")));

        gridLayout->addWidget(server, 1, 0, 1, 2);


        retranslateUi(AA_Headunit);

        QMetaObject::connectSlotsByName(AA_Headunit);
    } // setupUi

    void retranslateUi(QWidget *AA_Headunit)
    {
        AA_Headunit->setWindowTitle(QApplication::translate("AA_Headunit", "Form", nullptr));
        pushButton->setText(QApplication::translate("AA_Headunit", "Back", nullptr));
        auto_msg->setText(QApplication::translate("AA_Headunit", "No phone connected", nullptr));
        auto_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AA_Headunit: public Ui_AA_Headunit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AA_HEADUNIT_H
