/********************************************************************************
** Form generated from reading UI file 'obnovlenie3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBNOVLENIE3_H
#define UI_OBNOVLENIE3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_obnovlenie3
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *kod_change3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *name_change3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *kolvo_change3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *importer_change;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *postavka_change;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *apteka_change;

    void setupUi(QDialog *obnovlenie3)
    {
        if (obnovlenie3->objectName().isEmpty())
            obnovlenie3->setObjectName(QString::fromUtf8("obnovlenie3"));
        obnovlenie3->resize(430, 776);
        obnovlenie3->setStyleSheet(QString::fromUtf8("background-color:MediumSeaGreen"));
        label = new QLabel(obnovlenie3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 311, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro"));
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(obnovlenie3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 640, 291, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(18);
        font1.setBold(true);
        pushButton->setFont(font1);
        layoutWidget = new QWidget(obnovlenie3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 391, 29));
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

        kod_change3 = new QLineEdit(layoutWidget);
        kod_change3->setObjectName(QString::fromUtf8("kod_change3"));
        kod_change3->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout->addWidget(kod_change3);

        layoutWidget1 = new QWidget(obnovlenie3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 200, 391, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        name_change3 = new QLineEdit(layoutWidget1);
        name_change3->setObjectName(QString::fromUtf8("name_change3"));
        name_change3->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_2->addWidget(name_change3);

        layoutWidget2 = new QWidget(obnovlenie3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 280, 391, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        kolvo_change3 = new QLineEdit(layoutWidget2);
        kolvo_change3->setObjectName(QString::fromUtf8("kolvo_change3"));
        kolvo_change3->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_3->addWidget(kolvo_change3);

        layoutWidget3 = new QWidget(obnovlenie3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 390, 391, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_4->addWidget(label_5);

        importer_change = new QLineEdit(layoutWidget3);
        importer_change->setObjectName(QString::fromUtf8("importer_change"));
        importer_change->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_4->addWidget(importer_change);

        layoutWidget4 = new QWidget(obnovlenie3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 480, 391, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_5->addWidget(label_6);

        postavka_change = new QLineEdit(layoutWidget4);
        postavka_change->setObjectName(QString::fromUtf8("postavka_change"));
        postavka_change->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_5->addWidget(postavka_change);

        layoutWidget5 = new QWidget(obnovlenie3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 570, 391, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        horizontalLayout_6->addWidget(label_7);

        apteka_change = new QLineEdit(layoutWidget5);
        apteka_change->setObjectName(QString::fromUtf8("apteka_change"));
        apteka_change->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_6->addWidget(apteka_change);


        retranslateUi(obnovlenie3);

        QMetaObject::connectSlotsByName(obnovlenie3);
    } // setupUi

    void retranslateUi(QDialog *obnovlenie3)
    {
        obnovlenie3->setWindowTitle(QCoreApplication::translate("obnovlenie3", "Data Change", nullptr));
        label->setText(QCoreApplication::translate("obnovlenie3", "\320\230\320\227\320\234\320\225\320\235\320\225\320\235\320\230\320\225 \320\224\320\220\320\235\320\235\320\253\320\245", nullptr));
        pushButton->setText(QCoreApplication::translate("obnovlenie3", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("obnovlenie3", "\320\232\320\276\320\264 \320\277\320\276\320\273\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("obnovlenie3", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("obnovlenie3", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("obnovlenie3", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\230\320\274\320\277\320\276\321\200\321\202\320\265\321\200", nullptr));
        label_6->setText(QCoreApplication::translate("obnovlenie3", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\235\320\276\320\274\320\265\321\200 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("obnovlenie3", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\220\320\264\321\200\320\265\321\201 \320\260\320\277\321\202\320\265\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class obnovlenie3: public Ui_obnovlenie3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBNOVLENIE3_H