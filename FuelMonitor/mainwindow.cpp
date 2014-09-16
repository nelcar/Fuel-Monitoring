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
        cout << "tamaño arreglo" << fuel.size();
        for (int j = 0; j < x->getGasolineList().size(); j++){
            y = static_cast<gasoline>(fuel.at(j));
            File << y.getDate().toString().toStdString() << ","
                 << y.getCurrency() << ","
                 << y.getMiles() << ","
                 << y.getKilometers() << ","
                 << y.getLiters() << ","
                 << y.getGallons()<<",";
        }
        File << "\n";
    }
    File.close();
    QMessageBox msgBox;
    msgBox.setText("successfully saved files");
    msgBox.exec();
}

void MainWindow::on_pushButton_clicked()
{
    string route = "../Files/CarsInformation.txt";
    ifstream File;
    File.open(route.c_str(),ios::in); //open the file
    string lines = "";
    QString linestaken;
    QStringList parts;
    int con = 0,con2 = 0;
    while(!File.eof()){
        getline(File,lines);
        con++;
    }
    File.close();
    File.open(route.c_str(),ios::in); //open the file
    vector<gasoline> fuel;
    gasoline g;
    while(con2 < con-1){
        cout << "size de gasoline principio while" << fuel.size() <<endl;
        cout << "con2: " << con2 << endl;
        cout << "con: " << con << endl;
        con2++;
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
        QDate date;
        double currency;
        double miles;
        double kilometers;
        double liters;
        double gallons;
        int counter = parts.size()-8;
        int counter2 = 0;
        int position = 8;
        QMessageBox ms;
        cout << "parts.size: " << parts.size() << endl;
        for (int i = 0; i < parts.size()-8; i++){
            cout << "fuel size:" << fuel.size()<<endl;
            cout << "counter2 principio for:" << counter2<<endl;
            if(counter > 6){
                if(counter2 == 5){
                        gallons = QString::fromStdString(parts[position].toStdString()).toDouble();
                        g.setGallons(gallons);
                        fuel.push_back(g);
                        position++;
                        counter--;
                        counter2=0;
                }else{
                    if(counter2 == 0){
                        date = QDate::fromString(parts[position]);
                        position++;
                        counter--;
                        counter2++;
                        g.setDate(date);
                    }
                    else if(counter2 == 1){
                        currency = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter--;
                        counter2++;
                        g.setCurrency(currency);
                    }
                    else if(counter2 == 2){
                        miles = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter--;
                        counter2++;
                        g.setMiles(miles);
                    }
                    else if(counter2 == 3){
                        kilometers = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter--;
                        counter2++;
                        g.setKilometers(kilometers);
                    }
                    else if(counter2 == 4){
                        liters = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter--;
                        counter2++;
                        g.setLiters(liters);
                    }
                }
            }else{
                cout << "counter2 ultimo:" << counter2<<endl;
                if(counter2 == 5){
                        gallons = QString::fromStdString(parts[position].toStdString()).toDouble();
                        g.setGallons(gallons);
                        fuel.push_back(g);
                }else{

                    if(counter2 == 0){
                        date = QDate::fromString(parts[position]);
                        position++;
                        counter2++;
                        g.setDate(date);
                    }
                    else if(counter2 == 1){
                        currency = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter2++;
                        g.setCurrency(currency);
                    }
                    else if(counter2 == 2){
                        miles = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter2++;
                        g.setMiles(miles);
                    }
                    else if(counter2 == 3){
                        kilometers = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter2++;
                        g.setKilometers(kilometers);
                    }
                    else if(counter2 == 4){
                        liters = QString::fromStdString(parts[position].toStdString()).toDouble();
                        position++;
                        counter2++;
                        g.setLiters(liters);
                    }
                }

            }
            cout << "al final fuel size:" << fuel.size()<<endl;
        }
        Car* car = new Car();
        car->setNickname(nickname);
        car->setManufacturer(manufacturer);
        car->setModel(model);
        car->setYear(year);
        car->setStyle(style);
        car->setNumberPlate(numberPlate);
        car->setEngine(engine);
        car->setCylinderCapacity(cylinder);
        car->setGasolineList(fuel);
        carList->push_back(car);
    }
    File.close();
    QMessageBox msgBox;
    msgBox.setText("successfully uploaded files");
    msgBox.exec();
}

