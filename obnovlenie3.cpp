#include "obnovlenie3.h"
#include "ui_obnovlenie3.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QSqlTableModel>

obnovlenie3::obnovlenie3(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::obnovlenie3)
{
    ui->setupUi(this);
    postav = QSqlDatabase::addDatabase("QSQLITE", "DUTY");
    postav.setDatabaseName("./postavka.db");
}

obnovlenie3::~obnovlenie3()
{
    delete ui;
}

void obnovlenie3::on_pushButton_clicked()
{
    postav.open();
    QSqlQuery VZHSTROY(postav);
    VZHSTROY.prepare("Update Postavka4 Set Nazvanie=:Nazvanie, Kolvo=:Kolvo, Importer=:Importer, NomerPostavki=:NomerPostavki, AdresApteki=:AdresApteki Where Kod=:Kod;");
    VZHSTROY.bindValue(":Nazvanie", ui->name_change3->text());
    VZHSTROY.bindValue(":Kolvo", ui->kolvo_change3->text());
    VZHSTROY.bindValue(":Importer", ui->importer_change->text());
    VZHSTROY.bindValue(":NomerPostavki", ui->postavka_change->text());
    VZHSTROY.bindValue(":AdresApteki", ui->apteka_change->text());
    VZHSTROY.bindValue(":Kod", ui->kod_change3->text());
    VZHSTROY.exec();
    this->close();
}

