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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_4;
    QPushButton *Reset;
    QPushButton *Save;
    QPushButton *Exit;

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
"}"));
        gridLayout_2 = new QGridLayout(Settings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(Settings);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(page_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 823, 388));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setHorizontalSpacing(50);
        formLayout->setVerticalSpacing(50);
        formLayout->setContentsMargins(50, 100, 50, 200);
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFlat(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        Reset = new QPushButton(Settings);
        Reset->setObjectName(QString::fromUtf8("Reset"));
        Reset->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Reset, 1, 0, 1, 1);

        Save = new QPushButton(Settings);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Save, 2, 0, 1, 1);

        Exit = new QPushButton(Settings);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(Exit, 3, 0, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", nullptr));
        pushButton->setText(QApplication::translate("Settings", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Settings", "PushButton", nullptr));
        Reset->setText(QApplication::translate("Settings", "Reset settings", nullptr));
        Save->setText(QApplication::translate("Settings", "Save settings", nullptr));
        Exit->setText(QApplication::translate("Settings", "Exit settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
