/********************************************************************************
** Form generated from reading UI file 'deleteregisters.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEREGISTERS_H
#define UI_DELETEREGISTERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteregisters
{
public:
    QPushButton *pushButton_2;
    QComboBox *DRselectedRegister;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QDateEdit *DRdate;
    QLineEdit *DRgallons;
    QLineEdit *DRkilometers;
    QLineEdit *DRmiles;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *DRliters;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *DRcurrency;
    QPushButton *pushButton_3;

    void setupUi(QDialog *deleteregisters)
    {
        if (deleteregisters->objectName().isEmpty())
            deleteregisters->setObjectName(QStringLiteral("deleteregisters"));
        deleteregisters->resize(645, 258);
        pushButton_2 = new QPushButton(deleteregisters);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 96, 99, 101));
        DRselectedRegister = new QComboBox(deleteregisters);
        DRselectedRegister->setObjectName(QStringLiteral("DRselectedRegister"));
        DRselectedRegister->setGeometry(QRect(250, 10, 281, 31));
        label = new QLabel(deleteregisters);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 211, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(deleteregisters);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 60, 99, 27));
        label_2 = new QLabel(deleteregisters);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 60, 67, 17));
        DRdate = new QDateEdit(deleteregisters);
        DRdate->setObjectName(QStringLiteral("DRdate"));
        DRdate->setGeometry(QRect(270, 50, 141, 27));
        DRgallons = new QLineEdit(deleteregisters);
        DRgallons->setObjectName(QStringLiteral("DRgallons"));
        DRgallons->setGeometry(QRect(480, 180, 141, 27));
        DRkilometers = new QLineEdit(deleteregisters);
        DRkilometers->setObjectName(QStringLiteral("DRkilometers"));
        DRkilometers->setGeometry(QRect(270, 90, 141, 27));
        DRmiles = new QLineEdit(deleteregisters);
        DRmiles->setObjectName(QStringLiteral("DRmiles"));
        DRmiles->setGeometry(QRect(480, 90, 141, 27));
        label_7 = new QLabel(deleteregisters);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 180, 67, 17));
        label_6 = new QLabel(deleteregisters);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 100, 67, 17));
        DRliters = new QLineEdit(deleteregisters);
        DRliters->setObjectName(QStringLiteral("DRliters"));
        DRliters->setGeometry(QRect(270, 180, 141, 27));
        label_5 = new QLabel(deleteregisters);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 100, 91, 17));
        label_3 = new QLabel(deleteregisters);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 140, 121, 17));
        label_4 = new QLabel(deleteregisters);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 180, 111, 17));
        DRcurrency = new QLineEdit(deleteregisters);
        DRcurrency->setObjectName(QStringLiteral("DRcurrency"));
        DRcurrency->setGeometry(QRect(270, 130, 141, 27));
        pushButton_3 = new QPushButton(deleteregisters);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 10, 61, 27));

        retranslateUi(deleteregisters);

        QMetaObject::connectSlotsByName(deleteregisters);
    } // setupUi

    void retranslateUi(QDialog *deleteregisters)
    {
        deleteregisters->setWindowTitle(QApplication::translate("deleteregisters", "Delete Registrer", 0));
        pushButton_2->setText(QApplication::translate("deleteregisters", "Delete", 0));
        label->setText(QApplication::translate("deleteregisters", "Select Register:", 0));
        pushButton->setText(QApplication::translate("deleteregisters", "Select this", 0));
        label_2->setText(QApplication::translate("deleteregisters", "Date:", 0));
        label_7->setText(QApplication::translate("deleteregisters", "Gallons:", 0));
        label_6->setText(QApplication::translate("deleteregisters", "Miles:", 0));
        label_5->setText(QApplication::translate("deleteregisters", "Kilometers:", 0));
        label_3->setText(QApplication::translate("deleteregisters", "Amount of value:", 0));
        label_4->setText(QApplication::translate("deleteregisters", "Liters:", 0));
        pushButton_3->setText(QApplication::translate("deleteregisters", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteregisters: public Ui_deleteregisters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEREGISTERS_H
