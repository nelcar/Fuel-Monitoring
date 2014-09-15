#include "savecars.h"
#include "ui_savecars.h"
#include "gasoline.h"
#include "car.h"
#include "QMessageBox"
#include "modifyregisters.h"
#include "deleteregisters.h"
#include "reportallcars.h"
#include "reportthiscar.h"
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
    int selected = ui->SCchooseCar->currentIndex();

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

}
