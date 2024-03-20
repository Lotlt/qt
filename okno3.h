#ifndef OKNO3_H
#define OKNO3_H

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
class okno3;
}

class okno3 : public QDialog
{
    Q_OBJECT

public:
    explicit okno3(QWidget *parent = nullptr);
    ~okno3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::okno3 *ui;
    QSqlDatabase postav;
    QSqlQuery *post;
    QSqlTableModel *model3;
    int row3;
};

#endif // OKNO3_H
