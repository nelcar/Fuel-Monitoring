#ifndef DIALOGSAVEDCARS_H
#define DIALOGSAVEDCARS_H

#include <QDialog>
#include "mainwindow.h"
#include "car.h"
#include "gasoline.h"
#include "QString"
#include "QList"
#include <iostream>
namespace Ui {
class DialogSavedCars;
}

class DialogSavedCars : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSavedCars(QWidget *parent = 0);
    ~DialogSavedCars();
    MainWindow* main;

private slots:
    void on_SCrefresh_clicked();

private:
    Ui::DialogSavedCars *ui;
};

#endif // DIALOGSAVEDCARS_H
