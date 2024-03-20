#ifndef OKNO_2_H
#define OKNO_2_H

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
class okno_2;
}

class okno_2 : public QDialog
{
    Q_OBJECT

public:
    explicit okno_2(QWidget *parent = nullptr);
    ~okno_2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::okno_2 *ui;
    QSqlDatabase dbklienti;
    QSqlQuery *klient;
    QSqlTableModel *model2;
    int row2;
};

#endif // OKNO_2_H
