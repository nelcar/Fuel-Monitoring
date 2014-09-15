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
#include <string>
#include <fstream>
using namespace std;

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

void MainWindow::on_pushButton_2_clicked()
{
    ofstream File;
    File.open("../Files/CarsInformation.txt",ios::out|ios::trunc);
    Car *x = NULL;
    for (int i = 0; i < carList->size(); i++){
        x = static_cast<Car*>(carList->at(i));
        File << x->getNickname().toStdString() << ","
             << x->getManufacturer().toStdString() << ","
             << x->getModel().toStdString() << ","
             << x->getYear().toStdString() << ","
             << x->getStyle().toStdString() << ","
             << x->getNumberPlate().toStdString() << ","
             << x->getEngine().toStdString() << ","
             << x->getCylinderCapacity().toStdString() << "\n";
    }
    File.close();
}

void MainWindow::on_pushButton_clicked()
{
    string root = "../Files/CarsInformation.txt";
    ifstream File;
    File.open(root.c_str(),ios::in);
    int lines = 0;
    string lineas = "";

    while(!File.eof()){
        getline(File,lineas);

    }
}
