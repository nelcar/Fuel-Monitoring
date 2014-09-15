#include "gasoline.h"


QDate gasoline::getDate() const
{
    return date;
}

void gasoline::setDate(const QDate &value)
{
    date = value;
}

double gasoline::getCurrency() const
{
    return currency;
}

void gasoline::setCurrency(double value)
{
    currency = value;
}

double gasoline::getLiters() const
{
    return liters;
}

void gasoline::setLiters(double value)
{
    liters = value;
}


double gasoline::getGallons() const
{
    return gallons;
}

void gasoline::setGallons(double value)
{
    gallons = value;
}

double gasoline::getMiles() const
{
    return miles;
}

void gasoline::setMiles(double value)
{
    miles = value;
}

double gasoline::getKilometers() const
{
    return kilometers;
}

void gasoline::setKilometers(double value)
{
    kilometers = value;
}
gasoline::gasoline()
{
}
