/********************************************************************************
** Form generated from reading UI file 'okno_2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNO_2_H
#define UI_OKNO_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okno_2
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton_6;

    void setupUi(QDialog *okno_2)
    {
        if (okno_2->objectName().isEmpty())
            okno_2->setObjectName(QString::fromUtf8("okno_2"));
        okno_2->resize(1306, 667);
        okno_2->setMinimumSize(QSize(40, 40));
        okno_2->setStyleSheet(QString::fromUtf8("background-color:MediumSeaGreen"));
        groupBox = new QGroupBox(okno_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 171, 501));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 171, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(169, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro"));
        font.setPointSize(11);
        font.setBold(true);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(169, 80));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        groupBox_2 = new QGroupBox(okno_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 0, 1131, 80));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 1131, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(372, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(22);
        font1.setBold(true);
        pushButton_3->setFont(font1);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(373, 60));
        pushButton_4->setFont(font1);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(372, 60));
        pushButton_5->setFont(font1);

        horizontalLayout->addWidget(pushButton_5);

        tableView = new QTableView(okno_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(170, 80, 1131, 551));
        label = new QLabel(okno_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 640, 191, 16));
        pushButton_6 = new QPushButton(okno_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 640, 80, 24));

        retranslateUi(okno_2);

        QMetaObject::connectSlotsByName(okno_2);
    } // setupUi

    void retranslateUi(QDialog *okno_2)
    {
        okno_2->setWindowTitle(QCoreApplication::translate("okno_2", "Clients", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("okno_2", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("okno_2", "\320\237\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("okno_2", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("okno_2", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("okno_2", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("okno_2", "\320\222\321\213\320\261\321\200\320\260\320\275\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\320\260: \320\221\320\260\320\267\320\260 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        pushButton_6->setText(QCoreApplication::translate("okno_2", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class okno_2: public Ui_okno_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNO_2_H
