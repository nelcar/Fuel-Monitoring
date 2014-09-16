#ifndef DELETEREGISTERS_H
#define DELETEREGISTERS_H

#include <QDialog>
#include <vector>
#include "car.h"
namespace Ui {
class deleteregisters;
}

class deleteregisters : public QDialog
{
    Q_OBJECT

public:
    int index;
    explicit deleteregisters(QWidget *parent, int index, vector<Car*> *carList);
    ~deleteregisters();
    vector<Car*> *carList;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::deleteregisters *ui;
};

#endif // DELETEREGISTERS_H
