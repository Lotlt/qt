#ifndef OBNOVLENIE2_H
#define OBNOVLENIE2_H
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
class obnovlenie2;
}

class obnovlenie2 : public QDialog
{
    Q_OBJECT

public:
    explicit obnovlenie2(QWidget *parent = nullptr);
    ~obnovlenie2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::obnovlenie2 *ui;
    QSqlDatabase dbklienti;
    QSqlQuery *klientura;
};

#endif // OBNOVLENIE2_H
