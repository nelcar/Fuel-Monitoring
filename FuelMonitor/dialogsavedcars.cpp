#include "dialogsavedcars.h"
#include "ui_dialogsavedcars.h"
#include "car.h"
#include "gasoline.h"
#include "QString"
#include "QList"
#include <iostream>
#include "QMessageBox"
using namespace std;

DialogSavedCars::DialogSavedCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSavedCars)
{
    ui->setupUi(this);
}

DialogSavedCars::~DialogSavedCars()
{
    delete ui;
}

void DialogSavedCars::on_SCrefresh_clicked()
{//filling the combo box with saved cars
    QMessageBox msgBox;
    //ui->SCchooseCar->clear();
    //cout << main->carList.size();
    //QList<Car>lista = main->carList;
    msgBox.setText(main->carList[0].getNickname());
    msgBox.exec();
    for (int i=0; i<(main->carList).size();i++){
       //ui->SCchooseCar->addItem(lista[i].toString());
        //cout<<main->carList[i].toString().toStdString();

    }
}
