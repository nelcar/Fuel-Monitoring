#include "newcar1.h"
#include "ui_newcar1.h"

newcar1::newcar1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newcar1)
{
    ui->setupUi(this);
}

newcar1::~newcar1()
{
    delete ui;
}
