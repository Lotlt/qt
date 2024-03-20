#ifndef OBNOVLENIE_1_H
#define OBNOVLENIE_1_H
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
class obnovlenie_1;
}

class obnovlenie_1 : public QDialog
{
    Q_OBJECT

public:
    explicit obnovlenie_1(QWidget *parent = nullptr);
    ~obnovlenie_1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::obnovlenie_1 *ui;
    QSqlDatabase dbskl;
    QSqlDatabase db2;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // OBNOVLENIE_1_H
