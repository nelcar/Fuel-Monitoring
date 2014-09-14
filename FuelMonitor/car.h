#ifndef CAR_H
#define CAR_H
#include <QString>
#include <QList>
#include "gasoline.h"

class Car
{
    QString nickname;
    QString manufacturer;
    QString model;
    QString year;
    QString style;
    QString numberPlate;
    QString engine;
    QString cylinderCapacity;
    QList <gasoline> gasolineList;

public:
    Car();
    ~Car();
    QString getNickname() const;
    void setNickname(const QString &value);
    QString getManufacturer() const;
    void setManufacturer(const QString &value);
    QString getModel() const;
    void setModel(const QString &value);
    QString getYear() const;
    void setYear(const QString &value);
    QString getStyle() const;
    void setStyle(const QString &value);
    QString getNumberPlate() const;
    void setNumberPlate(const QString &value);
    QString getEngine() const;
    void setEngine(const QString &value);
    QString getCylinderCapacity() const;
    void setCylinderCapacity(const QString &value);
    QList<gasoline> getGasolineList() const;
    void setGasolineList(const QList<gasoline> &value);
};
#endif // CAR_H
