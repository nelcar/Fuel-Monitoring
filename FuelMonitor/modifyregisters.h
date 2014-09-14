#ifndef MODIFYREGISTERS_H
#define MODIFYREGISTERS_H

#include <QDialog>

namespace Ui {
class modifyregisters;
}

class modifyregisters : public QDialog
{
    Q_OBJECT

public:
    explicit modifyregisters(QWidget *parent = 0);
    ~modifyregisters();

private:
    Ui::modifyregisters *ui;
};

#endif // MODIFYREGISTERS_H
