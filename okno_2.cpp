#include "okno_2.h"
#include "ui_okno_2.h"
#include "okno.h"
#include "okno3.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QSqlTableModel>
#include <obnovlenie2.h>
#include <vhod.h>
okno_2::okno_2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::okno_2)
{
    ui->setupUi(this);
    QSqlDatabase dbklienti = QSqlDatabase::addDatabase("QSQLITE", "OF");
    dbklienti.setDatabaseName("./klienti.db");
    dbklienti.close();
    if(dbklienti.open()){
        qDebug("open klienti");
    } else {
        qDebug("not open klienti");
    }
    klient = new  QSqlQuery(dbklienti);
    klient->exec("Create table Klient2(Kod INT, Imya TXT, Familiya TXT, Otchestvo TXT,  Mobile INT, Adress TXT);");
    model2 = new QSqlTableModel(this, dbklienti);
    model2->setTable("Klient2");
    model2->select();
    ui->tableView->setModel(model2);
}

okno_2::~okno_2()
{
    delete ui;
}

void okno_2::on_pushButton_clicked()
{
    this->close();
    okno okno;
    okno.setModal(true);
    okno.exec();
}


void okno_2::on_pushButton_2_clicked()
{
    this->close();
    okno3 okno3;
    okno3.setModal(true);
    okno3.exec();
}




void okno_2::on_pushButton_3_clicked()
{
    model2->insertRow(model2->rowCount());
}



void okno_2::on_pushButton_4_clicked()
{
    model2->removeRow(row2);
}


void okno_2::on_tableView_activated(const QModelIndex &index)
{
    row2 = index.row();
}


void okno_2::on_pushButton_5_clicked()
{
    obnovlenie2 obnova2;
    obnova2.setModal(true);
    obnova2.exec();
}


void okno_2::on_pushButton_6_clicked()
{
    this->close();
    vhod vhod1;
    vhod1.setModal(true);
    vhod1.exec();

}

