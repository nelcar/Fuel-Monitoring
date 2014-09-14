#include "reportallcars.h"
#include "ui_reportallcars.h"

reportallcars::reportallcars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reportallcars)
{
    ui->setupUi(this);
}

reportallcars::~reportallcars()
{
    delete ui;
}
