/********************************************************************************
** Form generated from reading UI file 'jukebox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUKEBOX_H
#define UI_JUKEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <radioinfo.h>
#include "menuentry.h"

QT_BEGIN_NAMESPACE

class Ui_JukeBox
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *mode;
    QPushButton *exit;
    QPushButton *forward;
    QPushButton *back;
    QPushButton *play_pause;
    RadioInfo *radio;
    QSlider *volume;
    QPushButton *files;

    void setupUi(MenuEntry *JukeBox)
    {
        if (JukeBox->objectName().isEmpty())
            JukeBox->setObjectName(QString::fromUtf8("JukeBox"));
        JukeBox->resize(643, 469);
        gridLayout = new QGridLayout(JukeBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        label = new QLabel(JukeBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        mode = new QPushButton(JukeBox);
        mode->setObjectName(QString::fromUtf8("mode"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mode->sizePolicy().hasHeightForWidth());
        mode->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mode, 0, 5, 2, 1);

        exit = new QPushButton(JukeBox);
        exit->setObjectName(QString::fromUtf8("exit"));

        gridLayout->addWidget(exit, 0, 0, 1, 1);

        forward = new QPushButton(JukeBox);
        forward->setObjectName(QString::fromUtf8("forward"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(forward->sizePolicy().hasHeightForWidth());
        forward->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(forward, 4, 5, 1, 1);

        back = new QPushButton(JukeBox);
        back->setObjectName(QString::fromUtf8("back"));
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(back, 4, 1, 1, 1);

        play_pause = new QPushButton(JukeBox);
        play_pause->setObjectName(QString::fromUtf8("play_pause"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(play_pause->sizePolicy().hasHeightForWidth());
        play_pause->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(play_pause, 4, 2, 1, 3);

        radio = new RadioInfo(JukeBox);
        radio->setObjectName(QString::fromUtf8("radio"));
        radio->setStyleSheet(QString::fromUtf8("background:black;"));

        gridLayout->addWidget(radio, 2, 1, 2, 5);

        volume = new QSlider(JukeBox);
        volume->setObjectName(QString::fromUtf8("volume"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy3);
        volume->setValue(99);
        volume->setOrientation(Qt::Vertical);

        gridLayout->addWidget(volume, 1, 0, 3, 1);

        files = new QPushButton(JukeBox);
        files->setObjectName(QString::fromUtf8("files"));

        gridLayout->addWidget(files, 0, 1, 1, 4);


        retranslateUi(JukeBox);

        QMetaObject::connectSlotsByName(JukeBox);
    } // setupUi

    void retranslateUi(MenuEntry *JukeBox)
    {
        JukeBox->setWindowTitle(QApplication::translate("JukeBox", "Form", nullptr));
        label->setText(QApplication::translate("JukeBox", "Volume", nullptr));
        mode->setText(QApplication::translate("JukeBox", "Mode", nullptr));
        exit->setText(QApplication::translate("JukeBox", "exit", nullptr));
        forward->setText(QApplication::translate("JukeBox", "Forward", nullptr));
        back->setText(QApplication::translate("JukeBox", "Back", nullptr));
        play_pause->setText(QApplication::translate("JukeBox", "Play", nullptr));
        files->setText(QApplication::translate("JukeBox", "Files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JukeBox: public Ui_JukeBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUKEBOX_H
