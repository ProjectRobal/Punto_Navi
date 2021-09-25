/********************************************************************************
** Form generated from reading UI file 'messagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_H
#define UI_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageBox
{
public:
    QGridLayout *gridLayout;
    QFrame *back;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *msg;
    QDialogButtonBox *ok;

    void setupUi(QWidget *MessageBox)
    {
        if (MessageBox->objectName().isEmpty())
            MessageBox->setObjectName(QString::fromUtf8("MessageBox"));
        MessageBox->resize(541, 393);
        gridLayout = new QGridLayout(MessageBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        back = new QFrame(MessageBox);
        back->setObjectName(QString::fromUtf8("back"));
        back->setStyleSheet(QString::fromUtf8("#back \n"
"{\n"
"background: rgb(40, 40, 40);\n"
"border:2px solid white;\n"
"\n"
"}"));
        back->setFrameShape(QFrame::StyledPanel);
        back->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(back);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(back);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/warrn.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        msg = new QLabel(back);
        msg->setObjectName(QString::fromUtf8("msg"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(msg->sizePolicy().hasHeightForWidth());
        msg->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        msg->setFont(font);
        msg->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;"));
        msg->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(msg, 1, 0, 1, 1);

        ok = new QDialogButtonBox(back);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setStandardButtons(QDialogButtonBox::Ok);
        ok->setCenterButtons(true);

        gridLayout_2->addWidget(ok, 3, 0, 1, 1);


        gridLayout->addWidget(back, 0, 0, 1, 1);


        retranslateUi(MessageBox);

        QMetaObject::connectSlotsByName(MessageBox);
    } // setupUi

    void retranslateUi(QWidget *MessageBox)
    {
        MessageBox->setWindowTitle(QApplication::translate("MessageBox", "Dialog", nullptr));
        label_2->setText(QString());
        msg->setText(QApplication::translate("MessageBox", "Something you shouldn't see", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageBox: public Ui_MessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_H
