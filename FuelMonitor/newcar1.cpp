#include "newcar1.h"
#include "ui_newcar1.h"
#include "car.h"
#include "gasoline.h"
#include "QString"
#include "QList"
#include "QMessageBox"
newcar1::newcar1(QWidget *parent,vector<Car*> *carList) :
    QDialog(parent),
    ui(new Ui::newcar1)
{
    ui->setupUi(this);
    this->carList = carList;
}

newcar1::~newcar1()
{
    delete ui;
}

void newcar1::on_NCcreate_clicked()
{
    ui->NCerrorLabel->setText("");
    //Variable
    Car* car = new Car();
    QMessageBox msgBox;
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
        year = QString::number(ui->NCyear->value());
        style = ui->NCstyle->currentText();
        numberPlate = ui->NCnumberPlate->text();
        if(numberPlate.length() > 0){
            engine = ui->NCengine->currentText();
            cylinderCapacity = QString::number(ui->NCcylinderCapacity->value());

            //save it on QList
            car->setNickname(nickname);
            car->setManufacturer(manufacturer);
            car->setModel(model);
            car->setYear(year);
            car->setStyle(style);
            car->setNumberPlate(numberPlate);
            car->setEngine(engine);
            car->setCylinderCapacity(cylinderCapacity);
            this->carList->push_back(car);
            correct = true;
        }else{
            ui->NCerrorLabel->setText("MISSING FILL THE FIELD OF NUMBER PLATE");
        }//numberPlate.length end
    }else{
        ui->NCerrorLabel->setText("MISSING FILL THE FIELD OF MODEL");
    }//model.length end

    //Show correct message
    if(correct){
        msgBox.setText("New car was created");
        msgBox.exec();
        ui->NCnickname->setText("");
        ui->NCmodel->setText("");
        ui->NCnumberPlate->setText("");
    }else{
        msgBox.setText("Problems Creating new car \nSee bottom part for more information");
        msgBox.exec();
    }
}
