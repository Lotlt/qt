#ifndef OBNOVLENIE3_H
#define OBNOVLENIE3_H

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
class obnovlenie3;
}

class obnovlenie3 : public QDialog
{
    Q_OBJECT

public:
    explicit obnovlenie3(QWidget *parent = nullptr);
    ~obnovlenie3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::obnovlenie3 *ui;
    QSqlDatabase postav;
    QSqlQuery *VZHSTROY;
};

#endif // OBNOVLENIE3_H
