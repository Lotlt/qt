#ifndef REGISTRACIYA_H
#define REGISTRACIYA_H

#include <QSqlDatabase>
#include <QMainWindow>
#include <QDebug>
#include <QSqlQuery>
#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class registraciya;
}

class registraciya : public QDialog
{
    Q_OBJECT

public:
    explicit registraciya(QWidget *parent = nullptr);
    ~registraciya();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registraciya *ui;
    QSqlDatabase db2;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // REGISTRACIYA_H
