#ifndef MODIFYREGISTERS_H
#define MODIFYREGISTERS_H

#include <QDialog>
#include <vector>
#include "car.h"
namespace Ui {
using std::vector;
class modifyregisters;
}

class modifyregisters : public QDialog
{
    Q_OBJECT

public:
    int index;
    explicit modifyregisters(QWidget *parent, int index, vector<Car*> *carList);
    ~modifyregisters();
    vector<Car*> *carList;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::modifyregisters *ui;
};

#endif // MODIFYREGISTERS_H
