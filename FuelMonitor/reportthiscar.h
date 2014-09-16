#ifndef REPORTTHISCAR_H
#define REPORTTHISCAR_H

#include <QDialog>
#include <vector>
#include "car.h"
namespace Ui {
class reportthiscar;
}

class reportthiscar : public QDialog
{
    Q_OBJECT

public:
    int index;
    explicit reportthiscar(QWidget *parent, int index, vector<Car*> *carList);
    ~reportthiscar();
    vector<Car*> *carList;

private slots:
    void on_pushButton_clicked();

private:
    Ui::reportthiscar *ui;
};

#endif // REPORTTHISCAR_H
