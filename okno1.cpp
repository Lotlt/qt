#include "okno1.h"
#include "ui_okno1.h"

okno1::okno1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::okno1)
{
    ui->setupUi(this);
}

okno1::~okno1()
{
    delete ui;
}
