#include "reportthiscar.h"
#include "ui_reportthiscar.h"

reportthiscar::reportthiscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reportthiscar)
{
    ui->setupUi(this);
}

reportthiscar::~reportthiscar()
{
    delete ui;
}
