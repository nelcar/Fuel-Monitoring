/********************************************************************************
** Form generated from reading UI file 'dialognuevoauto.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNUEVOAUTO_H
#define UI_DIALOGNUEVOAUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_dialogNuevoAuto
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;

    void setupUi(QDialog *dialogNuevoAuto)
    {
        if (dialogNuevoAuto->objectName().isEmpty())
            dialogNuevoAuto->setObjectName(QStringLiteral("dialogNuevoAuto"));
        dialogNuevoAuto->resize(289, 353);
        label = new QLabel(dialogNuevoAuto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 161, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(dialogNuevoAuto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 81, 21));
        label_3 = new QLabel(dialogNuevoAuto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 67, 17));
        label_4 = new QLabel(dialogNuevoAuto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 67, 17));
        label_5 = new QLabel(dialogNuevoAuto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 67, 17));
        label_7 = new QLabel(dialogNuevoAuto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 210, 101, 17));
        label_8 = new QLabel(dialogNuevoAuto);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 240, 81, 16));
        label_9 = new QLabel(dialogNuevoAuto);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 90, 101, 21));
        label_6 = new QLabel(dialogNuevoAuto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 270, 131, 21));
        lineEdit = new QLineEdit(dialogNuevoAuto);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 120, 113, 27));
        comboBox = new QComboBox(dialogNuevoAuto);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 90, 111, 27));
        comboBox_4 = new QComboBox(dialogNuevoAuto);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(160, 180, 111, 27));
        lineEdit_2 = new QLineEdit(dialogNuevoAuto);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 210, 113, 27));
        comboBox_5 = new QComboBox(dialogNuevoAuto);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(160, 240, 111, 27));
        pushButton = new QPushButton(dialogNuevoAuto);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 310, 99, 27));
        lineEdit_3 = new QLineEdit(dialogNuevoAuto);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 60, 113, 27));
        spinBox = new QSpinBox(dialogNuevoAuto);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(160, 150, 111, 27));
        spinBox->setMinimum(1957);
        spinBox->setMaximum(2014);
        spinBox_2 = new QSpinBox(dialogNuevoAuto);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(160, 270, 111, 27));
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(12);

        retranslateUi(dialogNuevoAuto);

        QMetaObject::connectSlotsByName(dialogNuevoAuto);
    } // setupUi

    void retranslateUi(QDialog *dialogNuevoAuto)
    {
        dialogNuevoAuto->setWindowTitle(QApplication::translate("dialogNuevoAuto", "Dialog", 0));
        label->setText(QApplication::translate("dialogNuevoAuto", "Nuevo Auto", 0));
        label_2->setText(QApplication::translate("dialogNuevoAuto", "Nickname:", 0));
        label_3->setText(QApplication::translate("dialogNuevoAuto", "Model:", 0));
        label_4->setText(QApplication::translate("dialogNuevoAuto", "Year:", 0));
        label_5->setText(QApplication::translate("dialogNuevoAuto", "Style:", 0));
        label_7->setText(QApplication::translate("dialogNuevoAuto", "Number Plate:", 0));
        label_8->setText(QApplication::translate("dialogNuevoAuto", "Engine:", 0));
        label_9->setText(QApplication::translate("dialogNuevoAuto", "Manufacturer:", 0));
        label_6->setText(QApplication::translate("dialogNuevoAuto", "Cylinder Capacity:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("dialogNuevoAuto", "ACURA", 0)
         << QApplication::translate("dialogNuevoAuto", "ALFA ROMEO", 0)
         << QApplication::translate("dialogNuevoAuto", "ASTON MARTIN", 0)
         << QApplication::translate("dialogNuevoAuto", "AUDI", 0)
         << QApplication::translate("dialogNuevoAuto", "BENTLEY", 0)
         << QApplication::translate("dialogNuevoAuto", "BMW", 0)
         << QApplication::translate("dialogNuevoAuto", "BUICK", 0)
         << QApplication::translate("dialogNuevoAuto", "CADILLAC", 0)
         << QApplication::translate("dialogNuevoAuto", "CHEVROLET", 0)
         << QApplication::translate("dialogNuevoAuto", "CHRYSLET", 0)
         << QApplication::translate("dialogNuevoAuto", "CITROEN", 0)
         << QApplication::translate("dialogNuevoAuto", "New Item", 0)
         << QApplication::translate("dialogNuevoAuto", "DACIA", 0)
         << QApplication::translate("dialogNuevoAuto", "DAEWOO", 0)
         << QApplication::translate("dialogNuevoAuto", "DAIHATSU", 0)
         << QApplication::translate("dialogNuevoAuto", "DODGE", 0)
         << QApplication::translate("dialogNuevoAuto", "FERRARI", 0)
         << QApplication::translate("dialogNuevoAuto", "FIAT", 0)
         << QApplication::translate("dialogNuevoAuto", "FORD", 0)
         << QApplication::translate("dialogNuevoAuto", "GMC", 0)
         << QApplication::translate("dialogNuevoAuto", "HOLDEN", 0)
         << QApplication::translate("dialogNuevoAuto", "HONDA", 0)
         << QApplication::translate("dialogNuevoAuto", "HUMMER", 0)
         << QApplication::translate("dialogNuevoAuto", "HYUNDAI", 0)
         << QApplication::translate("dialogNuevoAuto", "INFINITI", 0)
         << QApplication::translate("dialogNuevoAuto", "ISUZO", 0)
         << QApplication::translate("dialogNuevoAuto", "JAGUAR", 0)
         << QApplication::translate("dialogNuevoAuto", "JEEP", 0)
         << QApplication::translate("dialogNuevoAuto", "KIA", 0)
         << QApplication::translate("dialogNuevoAuto", "LAMBORGHINI", 0)
         << QApplication::translate("dialogNuevoAuto", "LANCIA", 0)
         << QApplication::translate("dialogNuevoAuto", "LAND ROVER", 0)
         << QApplication::translate("dialogNuevoAuto", "LEXUS", 0)
         << QApplication::translate("dialogNuevoAuto", "LINCOLN", 0)
         << QApplication::translate("dialogNuevoAuto", "LINCOLN-MERCURY", 0)
         << QApplication::translate("dialogNuevoAuto", "LOTUS", 0)
         << QApplication::translate("dialogNuevoAuto", "LTI", 0)
         << QApplication::translate("dialogNuevoAuto", "MASERATI", 0)
         << QApplication::translate("dialogNuevoAuto", "MAZDA", 0)
         << QApplication::translate("dialogNuevoAuto", "MERCEDES-BENZ", 0)
         << QApplication::translate("dialogNuevoAuto", "MERCURY", 0)
         << QApplication::translate("dialogNuevoAuto", "METROCAB", 0)
         << QApplication::translate("dialogNuevoAuto", "MG ROVER", 0)
         << QApplication::translate("dialogNuevoAuto", "MINI", 0)
         << QApplication::translate("dialogNuevoAuto", "MITSUBISHI", 0)
         << QApplication::translate("dialogNuevoAuto", "MORGAN MOTOR", 0)
         << QApplication::translate("dialogNuevoAuto", "NISSAN", 0)
         << QApplication::translate("dialogNuevoAuto", "OPEL", 0)
         << QApplication::translate("dialogNuevoAuto", "PERODUA", 0)
         << QApplication::translate("dialogNuevoAuto", "PEUGEOT", 0)
         << QApplication::translate("dialogNuevoAuto", "PONTIAC", 0)
         << QApplication::translate("dialogNuevoAuto", "PORSCHE", 0)
         << QApplication::translate("dialogNuevoAuto", "PROTON", 0)
         << QApplication::translate("dialogNuevoAuto", "RENAULT", 0)
         << QApplication::translate("dialogNuevoAuto", "ROLLS-ROYCE", 0)
         << QApplication::translate("dialogNuevoAuto", "ROVER", 0)
         << QApplication::translate("dialogNuevoAuto", "SAAB", 0)
         << QApplication::translate("dialogNuevoAuto", "SATURN", 0)
         << QApplication::translate("dialogNuevoAuto", "SCION", 0)
         << QApplication::translate("dialogNuevoAuto", "SEAT", 0)
         << QApplication::translate("dialogNuevoAuto", "SKODA", 0)
         << QApplication::translate("dialogNuevoAuto", "SMART", 0)
         << QApplication::translate("dialogNuevoAuto", "SSANGYONG", 0)
         << QApplication::translate("dialogNuevoAuto", "SUBARU", 0)
         << QApplication::translate("dialogNuevoAuto", "SUZUKI", 0)
         << QApplication::translate("dialogNuevoAuto", "SYUK(SSANGYONG)", 0)
         << QApplication::translate("dialogNuevoAuto", "TATA", 0)
         << QApplication::translate("dialogNuevoAuto", "TOYOTA", 0)
         << QApplication::translate("dialogNuevoAuto", "VAUXHALL", 0)
         << QApplication::translate("dialogNuevoAuto", "VOLKSWAGEN", 0)
         << QApplication::translate("dialogNuevoAuto", "VOLVO", 0)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("dialogNuevoAuto", "Tourism", 0)
         << QApplication::translate("dialogNuevoAuto", "Pick up", 0)
         << QApplication::translate("dialogNuevoAuto", "Van", 0)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("dialogNuevoAuto", "Automatic", 0)
         << QApplication::translate("dialogNuevoAuto", "Manual", 0)
        );
        pushButton->setText(QApplication::translate("dialogNuevoAuto", "CREAR", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogNuevoAuto: public Ui_dialogNuevoAuto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNUEVOAUTO_H
