#ifndef DIALOGNUEVOAUTO_H
#define DIALOGNUEVOAUTO_H

#include <QDialog>

namespace Ui {
class dialogNuevoAuto;
}

class dialogNuevoAuto : public QDialog
{
    Q_OBJECT

public:
    explicit dialogNuevoAuto(QWidget *parent = 0);
    ~dialogNuevoAuto();

private:
    Ui::dialogNuevoAuto *ui;
};

#endif // DIALOGNUEVOAUTO_H
