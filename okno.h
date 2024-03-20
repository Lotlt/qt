#ifndef OKNO_H
#define OKNO_H
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
class okno;
}

class okno : public QDialog
{
    Q_OBJECT

public:
    explicit okno(QWidget *parent = nullptr);
    ~okno();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::okno *ui;
    QSqlDatabase dbskl;
    QSqlQuery *ochr;
    QSqlDatabase db2;
    QSqlTableModel *model;
    int row;
};

#endif // OKNO_H
