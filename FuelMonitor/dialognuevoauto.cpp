#include "dialognuevoauto.h"
#include "ui_dialognuevoauto.h"

dialogNuevoAuto::dialogNuevoAuto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogNuevoAuto)
{
    ui->setupUi(this);
}

dialogNuevoAuto::~dialogNuevoAuto()
{
    delete ui;
}
