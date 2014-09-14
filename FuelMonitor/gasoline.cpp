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

double gasoline::getPedometer() const
{
    return pedometer;
}

void gasoline::setPedometer(double value)
{
    pedometer = value;
}
gasoline::gasoline()
{
}
