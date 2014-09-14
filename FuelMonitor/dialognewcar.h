#ifndef DIALOGNEWCAR_H
#define DIALOGNEWCAR_H

#include <QDialog>

namespace Ui {
class dialognewcar;
}

class dialognewcar : public QDialog
{
    Q_OBJECT

public:
    explicit dialognewcar(QWidget *parent = 0);
    ~dialognewcar();

private:
    Ui::dialognewcar *ui;
};

#endif // DIALOGNEWCAR_H
