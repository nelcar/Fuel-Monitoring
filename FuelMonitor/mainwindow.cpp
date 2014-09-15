#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newcar1.h"
#include "savecars.h"
#include "QMessageBox"
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    carList = new vector <Car*>;

    //Create a new Directory
    mkdir("../Files",0777);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_nuevoAuto_clicked()
{
    newcar1 x(this, this->carList);
    x.setModal(true);
    x.exec();
}

void MainWindow::on_autos_clicked()
{
    savecars x(this, this->carList);
    x.setModal(true);
    x.exec();
}
