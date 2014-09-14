/********************************************************************************
** Form generated from reading UI file 'newcar1.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCAR1_H
#define UI_NEWCAR1_H

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

class Ui_newcar1
{
public:
    QSpinBox *NCcylinderCapacity;
    QPushButton *NCcreate;
    QComboBox *NCmanufacturer;
    QLineEdit *NCnumberPlate;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *NCnickname;
    QLineEdit *NCmodel;
    QLabel *label_8;
    QComboBox *NCengine;
    QComboBox *NCstyle;
    QLabel *label_5;
    QSpinBox *NCyear;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *newcar1)
    {
        if (newcar1->objectName().isEmpty())
            newcar1->setObjectName(QStringLiteral("newcar1"));
        newcar1->resize(358, 353);
        NCcylinderCapacity = new QSpinBox(newcar1);
        NCcylinderCapacity->setObjectName(QStringLiteral("NCcylinderCapacity"));
        NCcylinderCapacity->setGeometry(QRect(200, 260, 111, 27));
        NCcylinderCapacity->setMinimum(2);
        NCcylinderCapacity->setMaximum(12);
        NCcreate = new QPushButton(newcar1);
        NCcreate->setObjectName(QStringLiteral("NCcreate"));
        NCcreate->setGeometry(QRect(120, 300, 99, 27));
        NCmanufacturer = new QComboBox(newcar1);
        NCmanufacturer->setObjectName(QStringLiteral("NCmanufacturer"));
        NCmanufacturer->setGeometry(QRect(200, 80, 111, 27));
        NCnumberPlate = new QLineEdit(newcar1);
        NCnumberPlate->setObjectName(QStringLiteral("NCnumberPlate"));
        NCnumberPlate->setGeometry(QRect(200, 200, 113, 27));
        label_2 = new QLabel(newcar1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 50, 81, 21));
        label_6 = new QLabel(newcar1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 260, 131, 21));
        label_7 = new QLabel(newcar1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 200, 101, 17));
        label_9 = new QLabel(newcar1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 80, 101, 21));
        NCnickname = new QLineEdit(newcar1);
        NCnickname->setObjectName(QStringLiteral("NCnickname"));
        NCnickname->setGeometry(QRect(200, 50, 113, 27));
        NCmodel = new QLineEdit(newcar1);
        NCmodel->setObjectName(QStringLiteral("NCmodel"));
        NCmodel->setGeometry(QRect(200, 110, 113, 27));
        label_8 = new QLabel(newcar1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 230, 81, 16));
        NCengine = new QComboBox(newcar1);
        NCengine->setObjectName(QStringLiteral("NCengine"));
        NCengine->setGeometry(QRect(200, 230, 111, 27));
        NCstyle = new QComboBox(newcar1);
        NCstyle->setObjectName(QStringLiteral("NCstyle"));
        NCstyle->setGeometry(QRect(200, 170, 111, 27));
        label_5 = new QLabel(newcar1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 170, 67, 17));
        NCyear = new QSpinBox(newcar1);
        NCyear->setObjectName(QStringLiteral("NCyear"));
        NCyear->setGeometry(QRect(200, 140, 111, 27));
        NCyear->setMinimum(1957);
        NCyear->setMaximum(2014);
        label_4 = new QLabel(newcar1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 67, 17));
        label = new QLabel(newcar1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 0, 161, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(newcar1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 67, 17));

        retranslateUi(newcar1);

        QMetaObject::connectSlotsByName(newcar1);
    } // setupUi

    void retranslateUi(QDialog *newcar1)
    {
        newcar1->setWindowTitle(QApplication::translate("newcar1", "Dialog", 0));
        NCcreate->setText(QApplication::translate("newcar1", "CREATE", 0));
        NCmanufacturer->clear();
        NCmanufacturer->insertItems(0, QStringList()
         << QApplication::translate("newcar1", "ACURA", 0)
         << QApplication::translate("newcar1", "ALFA ROMEO", 0)
         << QApplication::translate("newcar1", "ASTON MARTIN", 0)
         << QApplication::translate("newcar1", "AUDI", 0)
         << QApplication::translate("newcar1", "BENTLEY", 0)
         << QApplication::translate("newcar1", "BMW", 0)
         << QApplication::translate("newcar1", "BUICK", 0)
         << QApplication::translate("newcar1", "CADILLAC", 0)
         << QApplication::translate("newcar1", "CHEVROLET", 0)
         << QApplication::translate("newcar1", "CHRYSLET", 0)
         << QApplication::translate("newcar1", "CITROEN", 0)
         << QApplication::translate("newcar1", "New Item", 0)
         << QApplication::translate("newcar1", "DACIA", 0)
         << QApplication::translate("newcar1", "DAEWOO", 0)
         << QApplication::translate("newcar1", "DAIHATSU", 0)
         << QApplication::translate("newcar1", "DODGE", 0)
         << QApplication::translate("newcar1", "FERRARI", 0)
         << QApplication::translate("newcar1", "FIAT", 0)
         << QApplication::translate("newcar1", "FORD", 0)
         << QApplication::translate("newcar1", "GMC", 0)
         << QApplication::translate("newcar1", "HOLDEN", 0)
         << QApplication::translate("newcar1", "HONDA", 0)
         << QApplication::translate("newcar1", "HUMMER", 0)
         << QApplication::translate("newcar1", "HYUNDAI", 0)
         << QApplication::translate("newcar1", "INFINITI", 0)
         << QApplication::translate("newcar1", "ISUZO", 0)
         << QApplication::translate("newcar1", "JAGUAR", 0)
         << QApplication::translate("newcar1", "JEEP", 0)
         << QApplication::translate("newcar1", "KIA", 0)
         << QApplication::translate("newcar1", "LAMBORGHINI", 0)
         << QApplication::translate("newcar1", "LANCIA", 0)
         << QApplication::translate("newcar1", "LAND ROVER", 0)
         << QApplication::translate("newcar1", "LEXUS", 0)
         << QApplication::translate("newcar1", "LINCOLN", 0)
         << QApplication::translate("newcar1", "LINCOLN-MERCURY", 0)
         << QApplication::translate("newcar1", "LOTUS", 0)
         << QApplication::translate("newcar1", "LTI", 0)
         << QApplication::translate("newcar1", "MASERATI", 0)
         << QApplication::translate("newcar1", "MAZDA", 0)
         << QApplication::translate("newcar1", "MERCEDES-BENZ", 0)
         << QApplication::translate("newcar1", "MERCURY", 0)
         << QApplication::translate("newcar1", "METROCAB", 0)
         << QApplication::translate("newcar1", "MG ROVER", 0)
         << QApplication::translate("newcar1", "MINI", 0)
         << QApplication::translate("newcar1", "MITSUBISHI", 0)
         << QApplication::translate("newcar1", "MORGAN MOTOR", 0)
         << QApplication::translate("newcar1", "NISSAN", 0)
         << QApplication::translate("newcar1", "OPEL", 0)
         << QApplication::translate("newcar1", "PERODUA", 0)
         << QApplication::translate("newcar1", "PEUGEOT", 0)
         << QApplication::translate("newcar1", "PONTIAC", 0)
         << QApplication::translate("newcar1", "PORSCHE", 0)
         << QApplication::translate("newcar1", "PROTON", 0)
         << QApplication::translate("newcar1", "RENAULT", 0)
         << QApplication::translate("newcar1", "ROLLS-ROYCE", 0)
         << QApplication::translate("newcar1", "ROVER", 0)
         << QApplication::translate("newcar1", "SAAB", 0)
         << QApplication::translate("newcar1", "SATURN", 0)
         << QApplication::translate("newcar1", "SCION", 0)
         << QApplication::translate("newcar1", "SEAT", 0)
         << QApplication::translate("newcar1", "SKODA", 0)
         << QApplication::translate("newcar1", "SMART", 0)
         << QApplication::translate("newcar1", "SSANGYONG", 0)
         << QApplication::translate("newcar1", "SUBARU", 0)
         << QApplication::translate("newcar1", "SUZUKI", 0)
         << QApplication::translate("newcar1", "SYUK(SSANGYONG)", 0)
         << QApplication::translate("newcar1", "TATA", 0)
         << QApplication::translate("newcar1", "TOYOTA", 0)
         << QApplication::translate("newcar1", "VAUXHALL", 0)
         << QApplication::translate("newcar1", "VOLKSWAGEN", 0)
         << QApplication::translate("newcar1", "VOLVO", 0)
        );
        label_2->setText(QApplication::translate("newcar1", "Nickname:", 0));
        label_6->setText(QApplication::translate("newcar1", "Cylinder Capacity:", 0));
        label_7->setText(QApplication::translate("newcar1", "Number Plate:", 0));
        label_9->setText(QApplication::translate("newcar1", "Manufacturer:", 0));
        label_8->setText(QApplication::translate("newcar1", "Engine:", 0));
        NCengine->clear();
        NCengine->insertItems(0, QStringList()
         << QApplication::translate("newcar1", "Automatic", 0)
         << QApplication::translate("newcar1", "Manual", 0)
        );
        NCstyle->clear();
        NCstyle->insertItems(0, QStringList()
         << QApplication::translate("newcar1", "Tourism", 0)
         << QApplication::translate("newcar1", "Pick up", 0)
         << QApplication::translate("newcar1", "Van", 0)
        );
        label_5->setText(QApplication::translate("newcar1", "Style:", 0));
        label_4->setText(QApplication::translate("newcar1", "Year:", 0));
        label->setText(QApplication::translate("newcar1", "NEW CAR", 0));
        label_3->setText(QApplication::translate("newcar1", "Model:", 0));
    } // retranslateUi

};

namespace Ui {
    class newcar1: public Ui_newcar1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCAR1_H
