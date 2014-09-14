#ifndef REPORTTHISCAR_H
#define REPORTTHISCAR_H

#include <QDialog>

namespace Ui {
class reportthiscar;
}

class reportthiscar : public QDialog
{
    Q_OBJECT

public:
    explicit reportthiscar(QWidget *parent = 0);
    ~reportthiscar();

private:
    Ui::reportthiscar *ui;
};

#endif // REPORTTHISCAR_H
