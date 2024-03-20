#ifndef VHOD_H
#define VHOD_H

#include <QDialog>
#include <QObject>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QtSql>
#include <QFileInfo>

namespace Ui {
class vhod;
}

class vhod : public QDialog
{
    Q_OBJECT

public:
    explicit vhod(QWidget *parent = nullptr);
    ~vhod();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::vhod *ui;
    QSqlDatabase db2;
    QSqlQuery *query;
    QSqlDatabase dbskl;
    QSqlTableModel *model;
};

#endif // VHOD_H
