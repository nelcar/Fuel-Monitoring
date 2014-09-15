#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "vector"
#include "car.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    std::vector<Car*> *carList;

private slots:
    void on_nuevoAuto_clicked();

    void on_autos_clicked();

private:
    //Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
