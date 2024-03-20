#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QSqlDatabase>
#include <QMainWindow>
#include <QDebug>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui {
class Welcome;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Welcome *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
