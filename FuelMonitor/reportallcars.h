#ifndef REPORTALLCARS_H
#define REPORTALLCARS_H

#include <QDialog>

namespace Ui {
class reportallcars;
}

class reportallcars : public QDialog
{
    Q_OBJECT

public:
    explicit reportallcars(QWidget *parent = 0);
    ~reportallcars();

private:
    Ui::reportallcars *ui;
};

#endif // REPORTALLCARS_H
