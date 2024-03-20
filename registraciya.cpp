#include "registraciya.h"
#include "ui_registraciya.h"
#include <QString>
#include <QMessageBox>
registraciya::registraciya(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registraciya)
{
    ui->setupUi(this);
    db2 = QSqlDatabase::addDatabase("QSQLITE");
    db2.setDatabaseName("./regdb.db");
    if(db2.open()){
        qDebug("Open");

    } else {
        qDebug("No open");
    }


   /* query->prepare("INSERT INTO reg_nfo(FirstName, LastName, Login, Pass)""VALUES(?,?,?,?)" );
    QString str1 = ui->lineEdit->text();
     QString str2 = ui->lineEdit_2->text();
      QString str3 = ui->lineEdit_3->text();
     QString str4 = ui->lineEdit_4->text();
     query->addBindValue(str1);
    query->addBindValue(str2);
     query->addBindValue(str3);
    query->addBindValue(str4);
     query->exec();*/
}

registraciya::~registraciya()
{
    delete ui;
}

void registraciya::on_pushButton_clicked()
{
    query = new QSqlQuery(db2);
    query->exec("CREATE TABLE reg_info(FirstName TXT, LastName TXT, Login TXT, Pass INT);");
    model = new QSqlTableModel(this, db2);
    QString str1 = ui->lineEdit->text();
    QString str2 = ui->lineEdit_2->text();
    QString str3 = ui->lineEdit_3->text();
    QString str4 = ui->lineEdit_4->text();
    if(str1 == NULL || str2 == NULL || str3 == NULL || str4 == NULL){
        QMessageBox::information(this,"Регистрация","Вы не заполнили все поля до конца, регистрация прервана");
        this->close();
    } else {
    query->prepare("INSERT INTO reg_info(FirstName, LastName, Login, Pass)""VALUES(:str1, :str2, :str3, :str4)" );
    query->addBindValue(str1);
    query->addBindValue(str2);
    query->addBindValue(str3);
    query->addBindValue(str4);
    query->exec();
    QMessageBox::about(this, "Регистрация", "Регистрация прошла успешно, теперь вы можете авторизоваться.");
    this->close();
    }
}

