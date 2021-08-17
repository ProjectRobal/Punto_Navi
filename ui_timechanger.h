/********************************************************************************
** Form generated from reading UI file 'timechanger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMECHANGER_H
#define UI_TIMECHANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TimeChanger
{
public:
    QDateTimeEdit *dateTimeEdit;
    QCalendarWidget *calendarWidget;
    QPushButton *back_to;

    void setupUi(QDialog *TimeChanger)
    {
        if (TimeChanger->objectName().isEmpty())
            TimeChanger->setObjectName(QString::fromUtf8("TimeChanger"));
        TimeChanger->resize(459, 324);
        dateTimeEdit = new QDateTimeEdit(TimeChanger);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(150, 50, 194, 24));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black;"));
        dateTimeEdit->setCalendarPopup(true);
        calendarWidget = new QCalendarWidget(TimeChanger);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(110, 130, 272, 156));
        calendarWidget->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"border-color:rgb(255, 170, 0);\n"
"color:white;"));
        calendarWidget->setGridVisible(true);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        back_to = new QPushButton(TimeChanger);
        back_to->setObjectName(QString::fromUtf8("back_to"));
        back_to->setGeometry(QRect(20, 20, 80, 23));
        back_to->setStyleSheet(QString::fromUtf8("color:white;"));

        retranslateUi(TimeChanger);

        QMetaObject::connectSlotsByName(TimeChanger);
    } // setupUi

    void retranslateUi(QDialog *TimeChanger)
    {
        TimeChanger->setWindowTitle(QApplication::translate("TimeChanger", "Dialog", nullptr));
        back_to->setText(QApplication::translate("TimeChanger", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeChanger: public Ui_TimeChanger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMECHANGER_H
