#include "dialognewcar.h"
#include "ui_dialognewcar.h"

dialognewcar::dialognewcar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialognewcar)
{
    ui->setupUi(this);
}

dialognewcar::~dialognewcar()
{
    delete ui;
}
