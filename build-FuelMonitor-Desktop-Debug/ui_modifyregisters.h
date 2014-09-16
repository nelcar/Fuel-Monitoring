/********************************************************************************
** Form generated from reading UI file 'modifyregisters.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYREGISTERS_H
#define UI_MODIFYREGISTERS_H

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

class Ui_modifyregisters
{
public:
    QLabel *label_4;
    QLabel *label_2;
    QDateEdit *MRdate;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QComboBox *MselectRegister;
    QLineEdit *MRkilometers;
    QLineEdit *MRcurrency;
    QLineEdit *MRliters;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *MRmiles;
    QLineEdit *MRgallons;

    void setupUi(QDialog *modifyregisters)
    {
        if (modifyregisters->objectName().isEmpty())
            modifyregisters->setObjectName(QStringLiteral("modifyregisters"));
        modifyregisters->resize(623, 253);
        label_4 = new QLabel(modifyregisters);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 190, 111, 17));
        label_2 = new QLabel(modifyregisters);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 70, 67, 17));
        MRdate = new QDateEdit(modifyregisters);
        MRdate->setObjectName(QStringLiteral("MRdate"));
        MRdate->setGeometry(QRect(260, 60, 141, 27));
        label_5 = new QLabel(modifyregisters);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 110, 91, 17));
        label_3 = new QLabel(modifyregisters);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 150, 121, 17));
        label = new QLabel(modifyregisters);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 211, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        MselectRegister = new QComboBox(modifyregisters);
        MselectRegister->setObjectName(QStringLiteral("MselectRegister"));
        MselectRegister->setGeometry(QRect(220, 20, 281, 31));
        MRkilometers = new QLineEdit(modifyregisters);
        MRkilometers->setObjectName(QStringLiteral("MRkilometers"));
        MRkilometers->setGeometry(QRect(260, 100, 141, 27));
        MRcurrency = new QLineEdit(modifyregisters);
        MRcurrency->setObjectName(QStringLiteral("MRcurrency"));
        MRcurrency->setGeometry(QRect(260, 140, 141, 27));
        MRliters = new QLineEdit(modifyregisters);
        MRliters->setObjectName(QStringLiteral("MRliters"));
        MRliters->setGeometry(QRect(260, 190, 141, 27));
        pushButton = new QPushButton(modifyregisters);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 70, 99, 27));
        pushButton_2 = new QPushButton(modifyregisters);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 106, 99, 101));
        pushButton_3 = new QPushButton(modifyregisters);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 20, 99, 31));
        label_6 = new QLabel(modifyregisters);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(410, 110, 67, 17));
        label_7 = new QLabel(modifyregisters);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(410, 190, 67, 17));
        MRmiles = new QLineEdit(modifyregisters);
        MRmiles->setObjectName(QStringLiteral("MRmiles"));
        MRmiles->setGeometry(QRect(470, 100, 141, 27));
        MRgallons = new QLineEdit(modifyregisters);
        MRgallons->setObjectName(QStringLiteral("MRgallons"));
        MRgallons->setGeometry(QRect(470, 190, 141, 27));

        retranslateUi(modifyregisters);

        QMetaObject::connectSlotsByName(modifyregisters);
    } // setupUi

    void retranslateUi(QDialog *modifyregisters)
    {
        modifyregisters->setWindowTitle(QApplication::translate("modifyregisters", "Modify Register", 0));
        label_4->setText(QApplication::translate("modifyregisters", "Liters:", 0));
        label_2->setText(QApplication::translate("modifyregisters", "Date:", 0));
        label_5->setText(QApplication::translate("modifyregisters", "Kilometers:", 0));
        label_3->setText(QApplication::translate("modifyregisters", "Amount of value:", 0));
        label->setText(QApplication::translate("modifyregisters", "Select Registrer:", 0));
        pushButton->setText(QApplication::translate("modifyregisters", "Select this", 0));
        pushButton_2->setText(QApplication::translate("modifyregisters", "Save", 0));
        pushButton_3->setText(QApplication::translate("modifyregisters", "Refresh", 0));
        label_6->setText(QApplication::translate("modifyregisters", "Miles:", 0));
        label_7->setText(QApplication::translate("modifyregisters", "Gallons:", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyregisters: public Ui_modifyregisters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYREGISTERS_H
