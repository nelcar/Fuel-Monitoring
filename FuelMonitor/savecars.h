#ifndef SAVECARS_H
#define SAVECARS_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class savecars;
}

class savecars : public QDialog
{
    Q_OBJECT

public:
    explicit savecars(QWidget *parent = 0);
    ~savecars();
    MainWindow* main;

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::savecars *ui;
};

#endif // SAVECARS_H
