#include "reportthiscar.h"
#include "ui_reportthiscar.h"

reportthiscar::reportthiscar(QWidget *parent, int index, vector<Car*> *carList) :
    QDialog(parent),
    ui(new Ui::reportthiscar)
{
    ui->setupUi(this);
    this->index=index;
    this->carList = carList;

}

reportthiscar::~reportthiscar()
{
    delete ui;
}

void reportthiscar::on_pushButton_clicked()
{
    double gallons;
    double kilometers,kilometers2;
    int days;
    double liters;
    double miles,miles2;
    double currency;
    double totalGallons=0;
    double totalKilometers=0;
    int totalDays=0;
    double totalLiters=0;
    double totalMiles=0;
    double totalCurrency=0;
    QDate date1,date2;

    Car *x;
    x = static_cast<Car*>(this->carList->at(index));
    gasoline y;
    for(int i = 0; i < x->getGasolineList().size(); i++){
        y = static_cast<gasoline>(x->getGasolineList().at(i));

        gallons = y.getGallons();
        kilometers = y.getKilometers();
        liters = y.getLiters();
        miles = y.getMiles();
        currency = y.getCurrency();

        totalGallons += gallons;
        totalLiters += liters;
        totalCurrency += currency;

        if(i < x->getGasolineList().size()-1){
            date1 = y.getDate();
            gasoline z;
            z = static_cast<gasoline>(x->getGasolineList().at(i+1));
            date2 = z.getDate();

            days = date1.daysTo(date2);
            totalDays +=days;

            kilometers2 = z.getKilometers();
            totalKilometers += kilometers2-kilometers;

            miles2 = z.getMiles();
            totalMiles += miles2-miles;
        }
    }

    ui->Tgalons->setText(QString::number(totalGallons));
    ui->Tkilometers->setText(QString::number(totalKilometers));
    ui->Tliters->setText(QString::number(totalLiters));
    ui->Tmiles->setText(QString::number(totalMiles));
    ui->Tmoney->setText(QString::number(totalCurrency));
    ui->Tdays->setText(QString::number(totalDays));

    double gallonsperkilometers = totalGallons/totalKilometers;
    ui->gal_kil->setText(QString::number(gallonsperkilometers));

    double litersperkilometers = totalLiters/totalKilometers;
    ui->lit_kil->setText(QString::number(litersperkilometers));

    double currencyperliters = totalCurrency/totalLiters;
    ui->mon_lit->setText(QString::number(currencyperliters));

    double gallonspermiles = totalGallons/totalMiles;
    ui->gal_mil->setText(QString::number(gallonspermiles));

    double literspermiles = totalLiters/totalMiles;
    ui->lit_mil->setText(QString::number(literspermiles));

    double currencypergallons = totalCurrency/totalGallons;
    ui->mon_gal->setText(QString::number(currencypergallons));

    double litersperday = totalLiters/totalDays;
    ui->lit_day->setText(QString::number(litersperday));

    double kilometersperday = totalKilometers/totalDays;
    ui->kilo_day->setText(QString::number(kilometersperday));

    double milesperday = totalMiles/totalDays;
    ui->mil_day->setText(QString::number(milesperday));

    double currencyperday = totalCurrency/totalDays;
    ui->mon_day->setText(QString::number(currencyperday));

    double gallonsperday = totalGallons/totalDays;
    ui->gal_day->setText(QString::number(gallonsperday));

    double milespergallon = totalMiles/totalGallons;
    ui->mil_gal->setText(QString::number(milespergallon));

    double milesperliters = totalMiles/totalLiters;
    ui->mil_lit->setText(QString::number(milesperliters));

    double milespermoney = totalMiles/totalCurrency;
    ui->mil_mon->setText(QString::number(milespermoney));

    double kilometerspergallon = totalKilometers/totalGallons;
    ui->kil_gal->setText(QString::number(kilometerspergallon));

    double kilometersperliters = totalKilometers/totalLiters;
    ui->kil_lit->setText(QString::number(kilometersperliters));

    double kilometerspermoney = totalKilometers/totalCurrency;
    ui->kil_mon->setText(QString::number(kilometerspermoney));

    ui->Rnickname->setText(x->getNickname());
    ui->Rmanufacturer->setText(x->getManufacturer());
    ui->Rmodel->setText(x->getModel());
    ui->Ryear->setText(x->getYear());
    ui->Rstyle->setText(x->getStyle());
    ui->RnumberPlate->setText(x->getNumberPlate());
    ui->Rengine->setText(x->getEngine());
    ui->Rcylinder->setText(x->getCylinderCapacity());
}
