#include "modifyregisters.h"
#include "ui_modifyregisters.h"

modifyregisters::modifyregisters(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyregisters)
{
    ui->setupUi(this);
}

modifyregisters::~modifyregisters()
{
    delete ui;
}
