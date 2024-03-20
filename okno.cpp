#include "okno.h"
#include "ui_okno.h"
#include "okno_2.h"
#include "mainwindow.h"
#include "okno3.h"
#include <obnovlenie_1.h>
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QSqlTableModel>
#include <vhod.h>

okno::okno(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::okno)
{
    ui->setupUi(this);
    QSqlDatabase dbskl = QSqlDatabase::addDatabase("QSQLITE", "BASE");
    dbskl.setDatabaseName("./sklad.db");
    dbskl.close();
    if(dbskl.open()){
        qDebug("open");
    } else {
        qDebug("not open");
    }
    ochr = new  QSqlQuery(dbskl);
    ochr->exec("Create table Skladik (Kod INT, Nazvanie TXT,  Kolichestvo INT, Proizvoditel TXT);");
    model = new QSqlTableModel(this, dbskl);
    model->setTable("Skladik");
    model->select();
    ui->tableView->setModel(model);

}

okno::~okno()
{
    delete ui;
}

void okno::on_pushButton_clicked()
{
    MainWindow main;
    main.hide();
    this->close();

    okno_2 okno2;
    okno2.setModal(true);
    okno2.exec();
}


void okno::on_pushButton_2_clicked()
{
    this->close();
    okno3 okno3;
    okno3.setModal(true);
    okno3.exec();
}


void okno::on_pushButton_3_clicked()
{
    model->insertRow(model->rowCount());
}


void okno::on_pushButton_4_clicked()
{
    model->removeRow(row);
}


void okno::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void okno::on_pushButton_5_clicked()
{
    obnovlenie_1 update1;
    update1.setModal(true);
    update1.exec();
}


void okno::on_pushButton_6_clicked()
{
    this->close();
    vhod vhod1;
    vhod1.setModal(true);
    vhod1.exec();

}

