#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newcar1.h"

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

void MainWindow::on_nuevoAuto_clicked()
{
   newcar1 x;
   x.setModal(true);
   x.exec();
}
