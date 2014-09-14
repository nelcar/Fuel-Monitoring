#ifndef DIALOGSAVEDCARS_H
#define DIALOGSAVEDCARS_H

#include <QDialog>

namespace Ui {
class DialogSavedCars;
}

class DialogSavedCars : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSavedCars(QWidget *parent = 0);
    ~DialogSavedCars();

private:
    Ui::DialogSavedCars *ui;
};

#endif // DIALOGSAVEDCARS_H
