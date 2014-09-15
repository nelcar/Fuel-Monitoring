#ifndef NEWCAR1_H
#define NEWCAR1_H
#include <QDialog>
#include <vector>
#include "car.h"
using std::vector;
namespace Ui {
class newcar1;
}

class newcar1 : public QDialog
{
    Q_OBJECT

public:

    explicit newcar1(QWidget *parent, vector<Car*> *carList);
    ~newcar1();
    vector<Car*> *carList;
private slots:
    void on_NCcreate_clicked();

private:
    Ui::newcar1 *ui;
};

#endif // NEWCAR1_H
