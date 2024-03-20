#include "okno3.h"
#include "ui_okno3.h"
#include "okno_2.h"
#include "okno.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QSqlTableModel>
#include <obnovlenie3.h>
#include <vhod.h>
okno3::okno3(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::okno3)
{
    ui->setupUi(this);
    QSqlDatabase postav = QSqlDatabase::addDatabase("QSQLITE", "DUTY");
    postav.setDatabaseName("./postavka.db");
   postav.close();
    if(postav.open()){
        qDebug("open postavka");
    } else {
        qDebug("not open postvka");
    }
   post = new  QSqlQuery(postav);
    post->exec("Create table Postavka4 (Kod INT, Nazvanie TXT, Kolvo INT, Importer TXT, NomerPostavki INT, AdresApteki TXT);");
    model3 = new QSqlTableModel(this, postav);
    model3->setTable("Postavka4");
    model3->select();
    ui->tableView->setModel(model3);
}

okno3::~okno3()
{
    delete ui;
}

void okno3::on_pushButton_clicked()
{
    this->close();
    okno okno;
    okno.setModal(true);
    okno.exec();
}


void okno3::on_pushButton_2_clicked()
{
    this->close();
    okno_2 okno2;
    okno2.setModal(true);
    okno2.exec();
}


void okno3::on_pushButton_3_clicked()
{
     model3->insertRow(model3->rowCount());
}


void okno3::on_pushButton_4_clicked()
{
     model3->removeRow(row3);
}



void okno3::on_tableView_clicked(const QModelIndex &index)
{
    row3 = index.row();
}


void okno3::on_pushButton_5_clicked()
{
    obnovlenie3 obnova3;
    obnova3.setModal(true);
    obnova3.exec();
}


void okno3::on_pushButton_6_clicked()
{
    this->close();
    vhod vhod1;
    vhod1.setModal(true);
    vhod1.exec();

}

