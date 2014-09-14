#ifndef DELETEREGISTERS_H
#define DELETEREGISTERS_H

#include <QDialog>

namespace Ui {
class deleteregisters;
}

class deleteregisters : public QDialog
{
    Q_OBJECT

public:
    explicit deleteregisters(QWidget *parent = 0);
    ~deleteregisters();

private:
    Ui::deleteregisters *ui;
};

#endif // DELETEREGISTERS_H
