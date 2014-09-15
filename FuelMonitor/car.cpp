#include "car.h"

Car::Car()
{

}

Car::~Car()
{

}

QString Car::toString() const
{
    return nickname + " " + numberPlate;
}

QString Car::getNickname() const
{
    return nickname;
}

void Car::setNickname(const QString &value)
{
    nickname = value;
}

QString Car::getManufacturer() const
{
    return manufacturer;
}

void Car::setManufacturer(const QString &value)
{
    manufacturer = value;
}

QString Car::getModel() const
{
    return model;
}

void Car::setModel(const QString &value)
{
    model = value;
}

QString Car::getYear() const
{
    return year;
}

void Car::setYear(const QString &value)
{
    year = value;
}

QString Car::getStyle() const
{
    return style;
}

void Car::setStyle(const QString &value)
{
    style = value;
}

QString Car::getNumberPlate() const
{
    return numberPlate;
}

void Car::setNumberPlate(const QString &value)
{
    numberPlate = value;
}

QString Car::getEngine() const
{
    return engine;
}

void Car::setEngine(const QString &value)
{
    engine = value;
}

QString Car::getCylinderCapacity() const
{
    return cylinderCapacity;
}

void Car::setCylinderCapacity(const QString &value)
{
    cylinderCapacity = value;
}

vector<gasoline> Car::getGasolineList() const
{
    return gasolineList;
}

void Car::setGasolineList(const vector<gasoline> &value)
{
    gasolineList = value;
}
