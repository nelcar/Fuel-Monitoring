#include "dialogsavedcars.h"
#include "ui_dialogsavedcars.h"

DialogSavedCars::DialogSavedCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSavedCars)
{
    ui->setupUi(this);
}

DialogSavedCars::~DialogSavedCars()
{
    delete ui;
}
