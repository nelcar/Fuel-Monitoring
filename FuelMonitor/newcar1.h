#ifndef NEWCAR1_H
#define NEWCAR1_H

#include <QDialog>

namespace Ui {
class newcar1;
}

class newcar1 : public QDialog
{
    Q_OBJECT

public:
    explicit newcar1(QWidget *parent = 0);
    ~newcar1();

private:
    Ui::newcar1 *ui;
};

#endif // NEWCAR1_H
