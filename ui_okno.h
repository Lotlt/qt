/********************************************************************************
** Form generated from reading UI file 'okno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNO_H
#define UI_OKNO_H

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

class Ui_okno
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton_6;

    void setupUi(QDialog *okno)
    {
        if (okno->objectName().isEmpty())
            okno->setObjectName(QString::fromUtf8("okno"));
        okno->resize(1306, 667);
        okno->setStyleSheet(QString::fromUtf8("background-color:MediumSeaGreen"));
        groupBox = new QGroupBox(okno);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 0, 1141, 80));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 1131, 82));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Code Pro"));
        font.setPointSize(22);
        font.setBold(true);
        pushButton_3->setFont(font);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 60));
        pushButton_4->setFont(font);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 60));
        pushButton_5->setFont(font);

        horizontalLayout_2->addWidget(pushButton_5);

        groupBox_2 = new QGroupBox(okno);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 171, 501));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 171, 168));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(40, 80));
        pushButton->setBaseSize(QSize(13, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 80));
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        tableView = new QTableView(okno);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(170, 80, 1131, 551));
        label = new QLabel(okno);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 640, 151, 20));
        pushButton_6 = new QPushButton(okno);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 640, 80, 24));

        retranslateUi(okno);

        QMetaObject::connectSlotsByName(okno);
    } // setupUi

    void retranslateUi(QDialog *okno)
    {
        okno->setWindowTitle(QCoreApplication::translate("okno", "Sklad", nullptr));
        groupBox->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("okno", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("okno", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("okno", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("okno", "\320\221\320\260\320\267\320\260 \320\272\320\273\320\270\320\265\320\275\321\202\320\276\320\262", nullptr));
        pushButton_2->setText(QCoreApplication::translate("okno", "\320\237\320\276\321\201\321\202\320\260\320\262\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("okno", "\320\222\321\213\320\261\321\200\320\260\320\275\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\320\260: \320\241\320\272\320\273\320\260\320\264", nullptr));
        pushButton_6->setText(QCoreApplication::translate("okno", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class okno: public Ui_okno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNO_H
