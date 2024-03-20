#include "obnovlenie_1.h"
#include "ui_obnovlenie_1.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QSqlTableModel>
#define Path_To_DBskl "C:/Users/makis/Documents/build-Novaya_Apteka2-5_15_12_mingw64_static-Debug/sqlfolder/sklad.db"

obnovlenie_1::obnovlenie_1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::obnovlenie_1)
{
    ui->setupUi(this);
    dbskl = QSqlDatabase::addDatabase("QSQLITE", "BASE");
    dbskl.setDatabaseName("./sklad.db");
    QFileInfo checkFile (Path_To_DBskl);
    dbskl.open();
    if(dbskl.open()){
        qDebug("open sklad");
    } else {
        qDebug("not open sklad");
    }
}

obnovlenie_1::~obnovlenie_1()
{
    delete ui;
}

void obnovlenie_1::on_pushButton_clicked()
{
    dbskl.open();
    if(dbskl.open()){
        qDebug("sklad open");
        }
    else{
        qDebug("not open");
    }
    QSqlQuery query(dbskl);
    query.prepare("UPDATE Skladik SET Nazvanie=:Nazvanie, Kolichestvo=:Kolichestvo, Proizvoditel=:Proizvoditel Where Kod= :Kod;");
    query.bindValue(":Kod", ui->kod_change->text());
    query.bindValue(":Nazvanie", ui->name_cahnge->text());
    query.bindValue(":Kolichestvo", ui->kolvo_change->text());
    query.bindValue(":Proizvoditel", ui->manuf_change->text());
    query.exec();
    QMessageBox::information(this,"",query.lastError().text());
    this->close();
}

