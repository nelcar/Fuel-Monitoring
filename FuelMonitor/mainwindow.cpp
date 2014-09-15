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
             << x->getCylinderCapacity().toStdString() << ",";
        vector<gasoline> fuel;
        fuel = x->getGasolineList();
        gasoline y;
        for (int j = 0; j < x->getGasolineList().size(); j++){
            y = static_cast<gasoline>(fuel.at(j));
            File << y.getDate().toString().toStdString() << ","
                 << y.getCurrency() << ","
                 << y.getMiles() << ","
                 << y.getKilometers() << ","
                 << y.getLiters() << ","
                 << y.getGallons();
        }
        File << "\n";
    }
    File.close();
}

void MainWindow::on_pushButton_clicked()
{
    string route = "../Files/CarsInformation.txt";
    ifstream File;
    File.open(route.c_str(),ios::in); //open the file
    string lines = "";
    QString linestaken;
    QStringList parts;
    int con = 0;
    while(!File.eof()){
        getline(File,lines);
        linestaken =QString::fromStdString(lines);
        parts = linestaken.split(",");

        QString nickname = parts[0];
        QString manufacturer = parts[1];
        QString model = parts[2];
        QString year = parts[3];
        QString style = parts[4];
        QString numberPlate = parts[5];
        QString engine = parts[6];
        QString cylinder = parts[7];

        Car* car = new Car();
        car->setNickname(nickname);
        car->setManufacturer(manufacturer);
        car->setModel(model);
        car->setYear(year);
        car->setStyle(style);
        car->setNumberPlate(numberPlate);
        car->setEngine(engine);
        car->setCylinderCapacity(cylinder);
        carList->push_back(car);
        con++;
    }
    File.close();
}
