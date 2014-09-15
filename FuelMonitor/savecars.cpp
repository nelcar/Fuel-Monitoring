#include "savecars.h"
#include "ui_savecars.h"
#include "gasoline.h"
#include "car.h"
#include "QMessageBox"
#include "modifyregisters.h"
#include "deleteregisters.h"
#include "reportallcars.h"
#include "reportthiscar.h"
#include "QDate"
#include <iostream>
using namespace std;

savecars::savecars(QWidget *parent, vector<Car*> *carList) :
    QDialog(parent),
    ui(new Ui::savecars)
{
    ui->setupUi(this);
    this->carList = carList;
}

savecars::~savecars()
{
    delete ui;
}

void savecars::on_pushButton_4_clicked()
{
    while(ui->SCchooseCar->currentIndex() > 0){
       ui->SCchooseCar->removeItem(0);
    }
    Car *x = NULL;
    for(int i = 0; i < carList->size(); i++){
        x = static_cast<Car*>(carList->at(i));
        ui->SCchooseCar->addItem(x->toString());
    }
}

void savecars::on_pushButton_6_clicked()
{
    modifyregisters x;
    x.setModal(true);
    x.exec();
}

void savecars::on_pushButton_10_clicked()
{
    deleteregisters x;
    x.setModal(true);
    x.exec();
}

void savecars::on_pushButton_3_clicked()
{
    reportthiscar x;
    x.setModal(true);
    x.exec();
}

void savecars::on_pushButton_2_clicked()
{
    reportallcars x;
    x.setModal(true);
    x.exec();
}



void savecars::on_addNewRegister_clicked()
{
    int selected;
    QDate date;
    double odometer;
    double amountFuel;
    double amountValue;
    double miles;
    double kilometers;
    double liters;
    double gallons;
    selected = ui->SCchooseCar->currentIndex();
    date = ui->SCaddDate->date();
    odometer = ui->SCaddPodometer->value();
    amountFuel = ui->SCaddAmountFuel->value();
    amountValue = ui->SCaddAmountValue->value();

    if(ui->SCdistance->currentIndex() == 0){
        miles = odometer;
        kilometers = miles*1.609344;
    }else{
        kilometers = odometer;
        miles = kilometers*0.621371192;
    }

    if(ui->SCcapacity->currentIndex() == 0){
        liters = amountFuel;
        gallons = liters*0.264172052;
    }else{
        gallons = amountFuel;
        liters = gallons*3.78541178;
    }
    gasoline g;
    g.setCurrency(amountValue);
    g.setDate(date);
    g.setGallons(gallons);
    g.setKilometers(kilometers);
    g.setLiters(liters);
    g.setMiles(miles);

    Car *x = NULL;
    x = static_cast<Car*>(carList->at(selected));
    vector<gasoline> fuel;
    fuel = x->getGasolineList();
    fuel.push_back(g);
    x->setGasolineList(fuel);
    this->carList->push_back(x);
    this->carList->erase(carList->begin()+(selected));
    ui->SCaddPodometer->setValue(0);
    ui->SCaddAmountFuel->setValue(0);
    ui->SCaddAmountValue->setValue(0);

}

