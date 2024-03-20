#include "obnovlenie2.h"
#include "ui_obnovlenie2.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QSqlTableModel>
#define Path_To_DBklienti "C:/Users/makis/Documents/build-Novaya_Apteka2-5_15_12_mingw64_static-Debug/klienti.db"
obnovlenie2::obnovlenie2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::obnovlenie2)
{
    ui->setupUi(this);
    dbklienti = QSqlDatabase::addDatabase("QSQLITE", "OF");
    dbklienti.setDatabaseName("/klienti.db");
}

obnovlenie2::~obnovlenie2()
{
    delete ui;
}

void obnovlenie2::on_pushButton_clicked()
{
    dbklienti.open();
    QSqlQuery klientura(dbklienti);
    klientura.prepare("Update Klient2 Set Imya=:Imya, Familiya=:Familiya, Otchestvo=:Otchestvo, Mobile=:Mobile, Adress=:Adress Where Kod=:Kod;");
    klientura.bindValue(":Imya",ui->name_change2->text());
    klientura.bindValue(":Familiya",ui->familia_change->text());
    klientura.bindValue(":Otchestvo",ui->otch_change->text());
    klientura.bindValue(":Mobile",ui->mobile_change->text());
    klientura.bindValue(":Adress",ui->adres_change->text());
    klientura.bindValue(":Kod",ui->kod_change2->text());
    QMessageBox::information(this,"",klientura.lastError().text());
    klientura.exec();
    this->close();
}

