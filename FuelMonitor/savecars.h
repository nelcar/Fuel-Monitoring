#ifndef SAVECARS_H
#define SAVECARS_H
#include <QDialog>
#include "car.h"

using std::vector;
namespace Ui {
class savecars;
}

class savecars : public QDialog
{
    Q_OBJECT

public:
    explicit savecars(QWidget *parent, vector<Car*> *carList);
    ~savecars();
    vector <Car*> *carList;
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::savecars *ui;
};

#endif // SAVECARS_H
