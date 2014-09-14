#include "newcar1.h"
#include "ui_newcar1.h"
#include "car.h"
#include "gasoline.h"
#include "QString"
#include "QList"

newcar1::newcar1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newcar1)
{
    ui->setupUi(this);
}

newcar1::~newcar1()
{
    delete ui;
}

void newcar1::on_NCcreate_clicked()
{
    //Variable
    Car car;
    QString nickname;
    QString manufacturer;
    QString model;
    QString year;
    QString style;
    QString numberPlate;
    QString engine;
    QString cylinderCapacity;
    bool correct = false;

    //getting information
    nickname = ui->NCnickname->text();
    manufacturer = ui->NCmanufacturer->currentText();
    model = ui->NCmodel->text();
    if(model.length() > 0){
        year = "" + ui->NCyear->value();
        style = ui->NCstyle->currentText();
        numberPlate = ui->NCnumberPlate->text();
        if(numberPlate.length() > 0){
            engine = ui->NCengine->currentText();
            cylinderCapacity = ui->NCcylinderCapacity->value();

            //save it on QList
            car.setNickname(nickname);
            car.setManufacturer(manufacturer);
            car.setModel(model);
            car.setYear(year);
            car.setStyle(style);
            car.setNumberPlate(numberPlate);
            car.setEngine(engine);
            car.setCylinderCapacity(cylinderCapacity);
            main->carList.append(car);
            correct = true;
        }else{

        }//endl numberPlate.length
    }else{

    }//model.length end

    //Show correct message
    if(correct){

    }else{

    }
}
