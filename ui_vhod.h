/********************************************************************************
** Form generated from reading UI file 'vhod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VHOD_H
#define UI_VHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vhod
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pass;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *login;
    QLabel *status;

    void setupUi(QDialog *vhod)
    {
        if (vhod->objectName().isEmpty())
            vhod->setObjectName(QString::fromUtf8("vhod"));
        vhod->resize(538, 396);
        vhod->setStyleSheet(QString::fromUtf8("background-color:MediumSeaGreen"));
        pushButton = new QPushButton(vhod);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 180, 80, 24));
        pushButton_2 = new QPushButton(vhod);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 210, 80, 24));
        layoutWidget = new QWidget(vhod);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 140, 161, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pass = new QLineEdit(layoutWidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout_2->addWidget(pass);

        layoutWidget1 = new QWidget(vhod);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 110, 161, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        login = new QLineEdit(layoutWidget1);
        login->setObjectName(QString::fromUtf8("login"));
        login->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setStyleSheet(QString::fromUtf8("background-color:white"));

        horizontalLayout->addWidget(login);

        status = new QLabel(vhod);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(70, 280, 421, 20));

        retranslateUi(vhod);

        QMetaObject::connectSlotsByName(vhod);
    } // setupUi

    void retranslateUi(QDialog *vhod)
    {
        vhod->setWindowTitle(QCoreApplication::translate("vhod", "Authorization", nullptr));
        pushButton->setText(QCoreApplication::translate("vhod", "\320\222\321\205\320\276\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("vhod", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("vhod", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("vhod", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vhod: public Ui_vhod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VHOD_H
