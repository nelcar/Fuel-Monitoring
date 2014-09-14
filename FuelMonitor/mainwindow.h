#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QList>
#include"car.h"

#include <QMainWindow>

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
    QList<Car> carList;
private slots:
    void on_nuevoAuto_clicked();

private:
    //Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
