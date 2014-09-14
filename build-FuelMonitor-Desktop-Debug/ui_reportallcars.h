/********************************************************************************
** Form generated from reading UI file 'reportallcars.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTALLCARS_H
#define UI_REPORTALLCARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_reportallcars
{
public:
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *reportallcars)
    {
        if (reportallcars->objectName().isEmpty())
            reportallcars->setObjectName(QStringLiteral("reportallcars"));
        reportallcars->resize(726, 405);
        label = new QLabel(reportallcars);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 401, 51));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(reportallcars);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 70, 681, 281));

        retranslateUi(reportallcars);

        QMetaObject::connectSlotsByName(reportallcars);
    } // setupUi

    void retranslateUi(QDialog *reportallcars)
    {
        reportallcars->setWindowTitle(QApplication::translate("reportallcars", "Dialog", 0));
        label->setText(QApplication::translate("reportallcars", "REPORT OF ALL CARS", 0));
    } // retranslateUi

};

namespace Ui {
    class reportallcars: public Ui_reportallcars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTALLCARS_H
