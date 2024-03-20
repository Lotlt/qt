#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vhod.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
    vhod avtor;
    avtor.setModal(true);
    avtor.exec();

}

