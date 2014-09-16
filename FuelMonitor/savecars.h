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

    void on_pushButton_clicked();

    void on_addNewRegister_clicked();

    void on_SCaddMiles_clicked();

    void on_MselectThisCar_clicked();

    void on_Mmodify_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::savecars *ui;
};

#endif // SAVECARS_H
