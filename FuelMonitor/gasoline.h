#ifndef GASOLINE_H
#define GASOLINE_H
#include <QString>
#include <QDate>

class gasoline
{
    QDate date;
    double currency;
    double liters;
    double pedometer;
public:
    gasoline();
    QDate getDate() const;
    void setDate(const QDate &value);
    double getCurrency() const;
    void setCurrency(double value);
    double getLiters() const;
    void setLiters(double value);
    double getPedometer() const;
    void setPedometer(double value);
};

#endif // GASOLINE_H
