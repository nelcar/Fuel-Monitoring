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
    double kilometers;
    int days;
    double liters;
    double miles;
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
        totalKilometers += kilometers;
        totalLiters += liters;
        totalMiles += miles;
        totalCurrency += currency;

        if(i < x->getGasolineList().size()-1){
            date1 = y.getDate();
            gasoline z;
            z = static_cast<gasoline>(x->getGasolineList().at(i+1));
            date2 = z.getDate();

            days = date1.daysTo(date2);
            totalDays +=days;
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
}
