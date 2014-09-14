#include "savecars.h"
#include "ui_savecars.h"
#include "gasoline.h"
#include "car.h"
#include "QList"
#include "QMessageBox"
savecars::savecars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::savecars)
{
    ui->setupUi(this);
}

savecars::~savecars()
{
    delete ui;
}

void savecars::on_pushButton_4_clicked()
{
    QMessageBox msgBox;
    msgBox.setText(QString::number(main->carList.size()));
    msgBox.exec();

      if(main->carList.isEmpty()){
          msgBox.setText("Estoy vacia");
          msgBox.exec();
      }
    //for(int i = 0; i < list.size(); i++){

    //}
}
