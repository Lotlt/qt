/********************************************************************************
** Form generated from reading UI file 'obnovlenie_1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBNOVLENIE_1_H
#define UI_OBNOVLENIE_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_obnovlenie_1
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name_cahnge;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *kod_change;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *kolvo_change;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *manuf_change;

    void setupUi(QDialog *obnovlenie_1)
    {
        if (obnovlenie_1->objectName().isEmpty())
            obnovlenie_1->setObjectName(QString::fromUtf8("obnovlenie_1"));
        obnovlenie_1->resize(430, 647);
        obnovlenie_1->setStyleSheet(QString::fromUtf8("background-color:MediumSeaGreen"));
        label = new QLabel(obnovlenie_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 311, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro"));
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(obnovlenie_1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 470, 291, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(18);
        font1.setBold(true);
        pushButton->setFont(font1);
        layoutWidget = new QWidget(obnovlenie_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 180, 391, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Code Pro"));
        font2.setPointSize(14);
        font2.setBold(true);
        label_2->setFont(font2);

        horizontalLayout->addWidget(label_2);

        name_cahnge = new QLineEdit(layoutWidget);
        name_cahnge->setObjectName(QString::fromUtf8("name_cahnge"));
        name_cahnge->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout->addWidget(name_cahnge);

        layoutWidget1 = new QWidget(obnovlenie_1);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 100, 391, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        kod_change = new QLineEdit(layoutWidget1);
        kod_change->setObjectName(QString::fromUtf8("kod_change"));
        kod_change->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_2->addWidget(kod_change);

        layoutWidget2 = new QWidget(obnovlenie_1);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 260, 391, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        kolvo_change = new QLineEdit(layoutWidget2);
        kolvo_change->setObjectName(QString::fromUtf8("kolvo_change"));
        kolvo_change->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_3->addWidget(kolvo_change);

        layoutWidget3 = new QWidget(obnovlenie_1);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 340, 391, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_4->addWidget(label_5);

        manuf_change = new QLineEdit(layoutWidget3);
        manuf_change->setObjectName(QString::fromUtf8("manuf_change"));
        manuf_change->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_4->addWidget(manuf_change);


        retranslateUi(obnovlenie_1);

        QMetaObject::connectSlotsByName(obnovlenie_1);
    } // setupUi

    void retranslateUi(QDialog *obnovlenie_1)
    {
        obnovlenie_1->setWindowTitle(QCoreApplication::translate("obnovlenie_1", "Data Change", nullptr));
        label->setText(QCoreApplication::translate("obnovlenie_1", "\320\230\320\227\320\234\320\225\320\235\320\225\320\235\320\230\320\225 \320\224\320\220\320\235\320\235\320\253\320\245", nullptr));
        pushButton->setText(QCoreApplication::translate("obnovlenie_1", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("obnovlenie_1", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("obnovlenie_1", "\320\232\320\276\320\264 \320\277\320\276\320\273\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("obnovlenie_1", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("obnovlenie_1", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class obnovlenie_1: public Ui_obnovlenie_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBNOVLENIE_1_H
