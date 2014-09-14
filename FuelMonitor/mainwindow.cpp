#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newcar1.h"
#include "savecars.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
QList<Car> MainWindow::getCarList() const
{
    return carList;
}

void MainWindow::setCarList(const QList<Car> &value)
{
    carList = value;
}


void MainWindow::on_nuevoAuto_clicked()
{
    newcar1 x;
    x.setModal(true);
    x.exec();
}

void MainWindow::on_autos_clicked()
{
    savecars x;
    x.setModal(true);
    x.exec();
}
