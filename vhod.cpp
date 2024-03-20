#include "vhod.h"
#include "ui_vhod.h"
#include "mainwindow.h"
#include "registraciya.h"
#include <QString>
#include <QMessageBox>
#include <QtSql>
#include <QFileInfo>
#include "okno.h"
#define Path_To_DB "C:/Users/makis/Documents/build-Novaya_Apteka2-5_15_12_mingw64_static-Debug/regdb.db"
vhod::vhod(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::vhod)
{
    ui->setupUi(this);
    db2 = QSqlDatabase::addDatabase("QSQLITE");
    db2.setDatabaseName("./regdb.db");
    QFileInfo checkFile (Path_To_DB);
    db2.open();
}

vhod::~vhod()
{
    delete ui;
}

void vhod::on_pushButton_clicked()
{
    okno okno1;
    okno1.setModal(true);

    MainWindow main;
    main.hide();
    QString User, Passw;
    User = ui->login->text();
    Passw = ui->pass->text();
    QSqlQuery qry(QSqlDatabase::database("regdb"));

    db2.open();
    if(qry.exec("SELECT Login, Pass FROM reg_info Where Login=\'"+User+"\'AND Pass=\'"+Passw+"\'"))
    {
        if(qry.next()){
            ui->status->setText("Авторизация прошла успешно");
           // QString msg = "Login = " + qry.value(0).toString()+"\n"+
                         // "Password = " + qry.value(1).toString()+"\n";
            QMessageBox::warning(this, "Авторизация", "Можете продолжать работу!");
            this->close();
            okno1.exec();
        }else{
            ui->status->setText("Пароль или логин не верный, проверьте данные и попробуйте еще раз");
        }

    }

}


void vhod::on_pushButton_2_clicked()
{
    registraciya reg;
    reg.setModal(true);
    reg.exec();
}


void vhod::on_pushButton_3_clicked()
{

}

