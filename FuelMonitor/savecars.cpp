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
    /*while(ui->SCchooseCar->currentIndex() > 0){
       ui->SCchooseCar->removeItem(0);
    }*/
    ui->SCchooseCar->clear();
    Car *x = NULL;
    for(int i = 0; i < carList->size(); i++){
        x = static_cast<Car*>(carList->at(i));
        ui->SCchooseCar->addItem(x->toString());
    }
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
        cout << "currentIndex" << ui->SCdistance->currentIndex() << endl;
        miles = odometer;
        kilometers = miles*1.609344;
    }else{
        cout << "currentIndex" << ui->SCdistance->currentIndex()<< endl;
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

    cout << "Agregar Fuel size" << x->getGasolineList().size()<< endl;
    this->carList->push_back(x);
    this->carList->erase(carList->begin()+(selected));
    ui->SCaddPodometer->setValue(0);
    ui->SCaddAmountFuel->setValue(0);
    ui->SCaddAmountValue->setValue(0);
}


void savecars::on_MselectThisCar_clicked()
{
    int selected = ui->SCchooseCar->currentIndex();
    QString nickname;
    QString manufacturer;
    QString model;
    QString year;
    QString style;
    QString numberPlate;
    QString engine;
    QString cylinder;
    Car *x = NULL;

    x = static_cast<Car*>(carList->at(selected));
    nickname = x->getNickname();
    manufacturer = x->getManufacturer();
    model = x->getModel();
    year = x->getYear();
    style = x->getStyle();
    numberPlate = x->getNumberPlate();
    engine = x->getEngine();
    cylinder = x->getCylinderCapacity();

    ui->MnickName->setText(nickname);
    ui->Mmanufacturer->setText(manufacturer);
    ui->Mmodel->setText(model);
    ui->Myear->setText(year);
    ui->Mstyle->setText(style);
    ui->MnumberPlate->setText(numberPlate);
    ui->Mengine->setText(engine);
    ui->Mcylinder->setText(cylinder);

}

void savecars::on_Mmodify_clicked()
{
    cout << "index:" << ui->SCchooseCar->currentIndex()<< endl;
    modifyregisters x (this,ui->SCchooseCar->currentIndex(),this->carList);
    x.setModal(true);
    x.exec();
}

void savecars::on_pushButton_7_clicked()
{
    int selected = ui->SCchooseCar->currentIndex();
    QString nickname;
    QString manufacturer;
    QString model;
    QString year;
    QString style;
    QString numberPlate;
    QString engine;
    QString cylinder;
    Car *x = NULL;

    x = static_cast<Car*>(carList->at(selected));
    nickname = ui->MnickName->text();
    manufacturer = ui->Mmanufacturer->text();
    model = ui->Mmodel->text();
    year = ui->Myear->text();
    style = ui->Mstyle->text();
    numberPlate = ui->MnumberPlate->text();
    engine = ui->Mengine->text();
    cylinder = ui->Mcylinder->text();

    ui->MnickName->setText("");
    ui->Mmanufacturer->setText("");
    ui->Mmodel->setText("");
    ui->Myear->setText("");
    ui->Mstyle->setText("");
    ui->MnumberPlate->setText("");
    ui->Mengine->setText("");
    ui->Mcylinder->setText("");

    x->setCylinderCapacity(cylinder);
    x->setEngine(engine);
    x->setGasolineList(x->getGasolineList());
    x->setManufacturer(manufacturer);
    x->setModel(model);
    x->setNickname(nickname);
    x->setNumberPlate(numberPlate);
    x->setStyle(style);
    x->setYear(year);

    this->carList->erase(carList->begin()+selected);
    this->carList->push_back(x);
    QMessageBox msgBox;
    msgBox.setText("Your Car was successfuly modify\nDon't forget push Refresh");
    msgBox.exec();
}
