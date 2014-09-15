#ifndef GASOLINE_H
#define GASOLINE_H
#include <QString>
#include <QDate>

class gasoline
{
    QDate date;
    double currency;
    double liters;
    double gallons;
    double miles;
    double kilometers;
public:
    gasoline();
    QDate getDate() const;
    void setDate(const QDate &value);
    double getCurrency() const;
    void setCurrency(double value);
    double getLiters() const;
    void setLiters(double value);
    double getGallons() const;
    void setGallons(double value);
    double getMiles() const;
    void setMiles(double value);
    double getKilometers() const;
    void setKilometers(double value);
};

#endif // GASOLINE_H
