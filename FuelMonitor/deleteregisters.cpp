#include "deleteregisters.h"
#include "ui_deleteregisters.h"

deleteregisters::deleteregisters(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteregisters)
{
    ui->setupUi(this);
}

deleteregisters::~deleteregisters()
{
    delete ui;
}
