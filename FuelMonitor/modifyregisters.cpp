#include "modifyregisters.h"
#include "ui_modifyregisters.h"
#include <iostream>
#include <QMessageBox>
using namespace std;
modifyregisters::modifyregisters(QWidget *parent, int index, vector<Car*> *carList) :
    QDialog(parent),
    ui(new Ui::modifyregisters)
{
    ui->setupUi(this);
    this->index=index;
    this->carList = carList;
}

modifyregisters::~modifyregisters()
{
    delete ui;
}

void modifyregisters::on_pushButton_3_clicked()
{
    /*while(ui->MselectRegister->currentIndex() > 0){
        ui->MselectRegister->removeItem(0);
     }*/
     ui->MselectRegister->clear();
     Car *x = NULL;
     x = static_cast<Car*>(carList->at(index));
     vector<gasoline> fuel;
     fuel = x->getGasolineList();
     gasoline y;
     cout << "fuel size" << fuel.size() << endl;
     for(int i = 0; i < fuel.size(); i++){
         y = static_cast<gasoline>(fuel.at(i));
         ui->MselectRegister->addItem(y.getDate().toString());
     }



}

void modifyregisters::on_pushButton_clicked()
{
    int selected = ui->MselectRegister->currentIndex();
    cout << "selected"<<selected << endl;
    Car *x = NULL;
    gasoline y;
    double miles;
    double kilometers;
    QDate date;
    double gallons;
    double liters;
    double currency;
    vector<gasoline> fuel;

    x = static_cast<Car*>(carList->at(index));
    fuel = x->getGasolineList();
    y = static_cast<gasoline>(fuel.at(selected));

    miles = y.getMiles();
    kilometers = y.getKilometers();
    date = y.getDate();
    gallons = y.getGallons();
    liters = y.getLiters();
    currency = y.getCurrency();

    ui->MRcurrency->setText(QString::number(currency));
    ui->MRdate->setDate(date);
    ui->MRgallons->setText(QString::number(gallons));
    ui->MRkilometers->setText(QString::number(kilometers));
    ui->MRliters->setText(QString::number(liters));
    ui->MRmiles->setText(QString::number(miles));
}

void modifyregisters::on_pushButton_2_clicked()
{
    int selected = ui->MselectRegister->currentIndex();
    cout << "selected"<<selected << endl;
    Car *x = NULL;
    gasoline y;
    double miles;
    double kilometers;
    QDate date;
    double gallons;
    double liters;
    double currency;
    vector<gasoline> fuel;

    x = static_cast<Car*>(carList->at(index));
    fuel = x->getGasolineList();
    y = static_cast<gasoline>(fuel.at(selected));

    miles = ui->MRmiles->text().toDouble();
    kilometers = ui->MRkilometers->text().toDouble();
    date = ui->MRdate->date();
    gallons = ui->MRgallons->text().toDouble();
    liters = ui->MRliters->text().toDouble();
    currency = ui->MRcurrency->text().toDouble();

    y.setCurrency(currency);
    y.setDate(date);
    y.setGallons(gallons);
    y.setKilometers(kilometers);
    y.setLiters(liters);
    y.setMiles(miles);

    fuel.push_back(y);
    fuel.erase(fuel.begin()+selected);
    x->setGasolineList(fuel);

    this->carList->push_back(x);
    this->carList->erase(carList->begin()+(index));

    ui->MRcurrency->setText("");
    ui->MRgallons->setText("");
    ui->MRkilometers->setText("");
    ui->MRliters->setText("");
    ui->MRmiles->setText("");
    QMessageBox msgBox;
    msgBox.setText("Your fuel register was successfuly modify\nDon't forget push Refresh");
    msgBox.exec();
}
