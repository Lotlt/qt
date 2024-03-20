/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(800, 600);
        Welcome->setStyleSheet(QString::fromUtf8("background-color:MediumSeaGreen\n"
""));
        centralwidget = new QWidget(Welcome);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 30, 541, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Rockwell"));
        font.setPointSize(36);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 110, 621, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rockwell"));
        font1.setPointSize(26);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 150, 631, 51));
        label_3->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 300, 241, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rockwell"));
        font2.setPointSize(16);
        font2.setBold(true);
        pushButton->setFont(font2);
        Welcome->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Welcome);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Welcome->setStatusBar(statusbar);

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Welcome", nullptr));
        label->setText(QCoreApplication::translate("Welcome", "\320\235\320\276\320\262\320\260\321\217 \320\220\320\277\321\202\320\265\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Welcome", "\320\224\320\273\321\217 \320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\265\320\275\320\270\321\217 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("Welcome", "\320\235\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\260 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Welcome", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
