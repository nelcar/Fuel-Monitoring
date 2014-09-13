#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialognuevoauto.h"

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
   dialogNuevoAuto x;
   x.exec();
   x.show();
}
