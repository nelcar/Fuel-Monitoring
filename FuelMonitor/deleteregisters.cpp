#include "deleteregisters.h"
#include "ui_deleteregisters.h"
#include "QMessageBox"
deleteregisters::deleteregisters(QWidget *parent, int index, vector<Car*> *carList) :
    QDialog(parent),
    ui(new Ui::deleteregisters)
{
    ui->setupUi(this);
    this->index=index;
    this->carList = carList;
}

deleteregisters::~deleteregisters()
{
    delete ui;
}

void deleteregisters::on_pushButton_clicked()
{
    int selected = ui->DRselectedRegister->currentIndex();
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

    ui->DRcurrency->setText(QString::number(currency));
    ui->DRdate->setDate(date);
    ui->DRgallons->setText(QString::number(gallons));
    ui->DRkilometers->setText(QString::number(kilometers));
    ui->DRliters->setText(QString::number(liters));
    ui->DRmiles->setText(QString::number(miles));
}

void deleteregisters::on_pushButton_3_clicked()
{
    ui->DRselectedRegister->clear();
    Car *x = NULL;
    x = static_cast<Car*>(carList->at(index));
    vector<gasoline> fuel;
    fuel = x->getGasolineList();
    gasoline y;
    for(int i = 0; i < fuel.size(); i++){
        y = static_cast<gasoline>(fuel.at(i));
        ui->DRselectedRegister->addItem(y.getDate().toString());
    }
}

void deleteregisters::on_pushButton_2_clicked()
{
    int selected = ui->DRselectedRegister->currentIndex();
    Car *x = NULL;
    gasoline y;
    vector<gasoline> fuel;

    x = static_cast<Car*>(carList->at(index));
    fuel = x->getGasolineList();
    y = static_cast<gasoline>(fuel.at(selected));

    fuel.erase(fuel.begin()+selected);
    x->setGasolineList(fuel);

    this->carList->push_back(x);
    this->carList->erase(carList->begin()+(index));

    ui->DRcurrency->setText("");
    ui->DRgallons->setText("");
    ui->DRkilometers->setText("");
    ui->DRliters->setText("");
    ui->DRmiles->setText("");
    QMessageBox msgBox;
    msgBox.setText("Your fuel register was successfuly modify\nDon't forget push Refresh");
    msgBox.exec();
}
