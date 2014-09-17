/********************************************************************************
** Form generated from reading UI file 'savecars.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECARS_H
#define UI_SAVECARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_savecars
{
public:
    QPushButton *pushButton_3;
    QComboBox *SCchooseCar;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *SCaddDate;
    QDoubleSpinBox *SCaddPodometer;
    QDoubleSpinBox *SCaddAmountValue;
    QDoubleSpinBox *SCaddAmountFuel;
    QPushButton *addNewRegister;
    QComboBox *SCdistance;
    QComboBox *SCcapacity;
    QWidget *tab_2;
    QPushButton *MselectThisCar;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *MnickName;
    QLineEdit *Mmanufacturer;
    QLineEdit *Mmodel;
    QLineEdit *Myear;
    QLineEdit *Mstyle;
    QLineEdit *MnumberPlate;
    QLineEdit *Mengine;
    QLineEdit *Mcylinder;
    QPushButton *Mmodify;
    QPushButton *pushButton_7;
    QWidget *tan_3;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *Dengine;
    QLabel *label_16;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *Dyear;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *DnumberPlate;
    QLineEdit *Dcylinder;
    QLineEdit *DmanuFacturer;
    QLabel *label_19;
    QPushButton *pushButton_10;
    QLabel *label_20;
    QLineEdit *DnickName;
    QLineEdit *Dmodel;
    QLabel *label_21;
    QLineEdit *Dstyle;
    QPushButton *pushButton_4;

    void setupUi(QDialog *savecars)
    {
        if (savecars->objectName().isEmpty())
            savecars->setObjectName(QStringLiteral("savecars"));
        savecars->resize(688, 418);
        pushButton_3 = new QPushButton(savecars);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 350, 261, 27));
        SCchooseCar = new QComboBox(savecars);
        SCchooseCar->setObjectName(QStringLiteral("SCchooseCar"));
        SCchooseCar->setGeometry(QRect(190, 30, 411, 27));
        label = new QLabel(savecars);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 131, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tabWidget = new QTabWidget(savecars);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 60, 641, 271));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 67, 17));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 20, 121, 17));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 111, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 91, 17));
        SCaddDate = new QDateEdit(tab);
        SCaddDate->setObjectName(QStringLiteral("SCaddDate"));
        SCaddDate->setGeometry(QRect(160, 20, 141, 27));
        SCaddPodometer = new QDoubleSpinBox(tab);
        SCaddPodometer->setObjectName(QStringLiteral("SCaddPodometer"));
        SCaddPodometer->setGeometry(QRect(160, 80, 141, 27));
        SCaddPodometer->setMaximum(1e+06);
        SCaddAmountValue = new QDoubleSpinBox(tab);
        SCaddAmountValue->setObjectName(QStringLiteral("SCaddAmountValue"));
        SCaddAmountValue->setGeometry(QRect(470, 20, 141, 27));
        SCaddAmountValue->setMaximum(100000);
        SCaddAmountFuel = new QDoubleSpinBox(tab);
        SCaddAmountFuel->setObjectName(QStringLiteral("SCaddAmountFuel"));
        SCaddAmountFuel->setGeometry(QRect(160, 140, 141, 27));
        SCaddAmountFuel->setMaximum(10000);
        addNewRegister = new QPushButton(tab);
        addNewRegister->setObjectName(QStringLiteral("addNewRegister"));
        addNewRegister->setGeometry(QRect(20, 190, 561, 27));
        SCdistance = new QComboBox(tab);
        SCdistance->setObjectName(QStringLiteral("SCdistance"));
        SCdistance->setGeometry(QRect(330, 80, 281, 27));
        SCcapacity = new QComboBox(tab);
        SCcapacity->setObjectName(QStringLiteral("SCcapacity"));
        SCcapacity->setGeometry(QRect(330, 140, 281, 27));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        MselectThisCar = new QPushButton(tab_2);
        MselectThisCar->setObjectName(QStringLiteral("MselectThisCar"));
        MselectThisCar->setGeometry(QRect(10, 10, 121, 27));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 20, 71, 16));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 20, 101, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 50, 61, 17));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 50, 67, 17));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 80, 51, 17));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(370, 80, 101, 17));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 110, 67, 17));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(370, 110, 131, 17));
        MnickName = new QLineEdit(tab_2);
        MnickName->setObjectName(QStringLiteral("MnickName"));
        MnickName->setGeometry(QRect(230, 20, 113, 27));
        Mmanufacturer = new QLineEdit(tab_2);
        Mmanufacturer->setObjectName(QStringLiteral("Mmanufacturer"));
        Mmanufacturer->setGeometry(QRect(500, 20, 113, 27));
        Mmodel = new QLineEdit(tab_2);
        Mmodel->setObjectName(QStringLiteral("Mmodel"));
        Mmodel->setGeometry(QRect(230, 50, 113, 27));
        Myear = new QLineEdit(tab_2);
        Myear->setObjectName(QStringLiteral("Myear"));
        Myear->setGeometry(QRect(500, 50, 113, 27));
        Mstyle = new QLineEdit(tab_2);
        Mstyle->setObjectName(QStringLiteral("Mstyle"));
        Mstyle->setGeometry(QRect(230, 80, 113, 27));
        MnumberPlate = new QLineEdit(tab_2);
        MnumberPlate->setObjectName(QStringLiteral("MnumberPlate"));
        MnumberPlate->setGeometry(QRect(500, 80, 113, 27));
        Mengine = new QLineEdit(tab_2);
        Mengine->setObjectName(QStringLiteral("Mengine"));
        Mengine->setGeometry(QRect(230, 110, 113, 27));
        Mcylinder = new QLineEdit(tab_2);
        Mcylinder->setObjectName(QStringLiteral("Mcylinder"));
        Mcylinder->setGeometry(QRect(500, 110, 113, 27));
        Mmodify = new QPushButton(tab_2);
        Mmodify->setObjectName(QStringLiteral("Mmodify"));
        Mmodify->setGeometry(QRect(150, 150, 471, 27));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 60, 99, 131));
        tabWidget->addTab(tab_2, QString());
        tan_3 = new QWidget();
        tan_3->setObjectName(QStringLiteral("tan_3"));
        label_14 = new QLabel(tan_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(370, 20, 101, 16));
        label_15 = new QLabel(tan_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(370, 50, 67, 17));
        Dengine = new QLineEdit(tan_3);
        Dengine->setObjectName(QStringLiteral("Dengine"));
        Dengine->setGeometry(QRect(230, 110, 113, 27));
        label_16 = new QLabel(tan_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(370, 80, 101, 17));
        pushButton_8 = new QPushButton(tan_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 60, 99, 131));
        pushButton_9 = new QPushButton(tan_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 121, 27));
        Dyear = new QLineEdit(tan_3);
        Dyear->setObjectName(QStringLiteral("Dyear"));
        Dyear->setGeometry(QRect(500, 50, 113, 27));
        label_17 = new QLabel(tan_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(150, 110, 67, 17));
        label_18 = new QLabel(tan_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(150, 50, 61, 17));
        DnumberPlate = new QLineEdit(tan_3);
        DnumberPlate->setObjectName(QStringLiteral("DnumberPlate"));
        DnumberPlate->setGeometry(QRect(500, 80, 113, 27));
        Dcylinder = new QLineEdit(tan_3);
        Dcylinder->setObjectName(QStringLiteral("Dcylinder"));
        Dcylinder->setGeometry(QRect(500, 110, 113, 27));
        DmanuFacturer = new QLineEdit(tan_3);
        DmanuFacturer->setObjectName(QStringLiteral("DmanuFacturer"));
        DmanuFacturer->setGeometry(QRect(500, 20, 113, 27));
        label_19 = new QLabel(tan_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(150, 80, 51, 17));
        pushButton_10 = new QPushButton(tan_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(150, 150, 471, 27));
        label_20 = new QLabel(tan_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(150, 20, 71, 16));
        DnickName = new QLineEdit(tan_3);
        DnickName->setObjectName(QStringLiteral("DnickName"));
        DnickName->setGeometry(QRect(230, 20, 113, 27));
        Dmodel = new QLineEdit(tan_3);
        Dmodel->setObjectName(QStringLiteral("Dmodel"));
        Dmodel->setGeometry(QRect(230, 50, 113, 27));
        label_21 = new QLabel(tan_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(370, 110, 131, 17));
        Dstyle = new QLineEdit(tan_3);
        Dstyle->setObjectName(QStringLiteral("Dstyle"));
        Dstyle->setGeometry(QRect(230, 80, 113, 27));
        tabWidget->addTab(tan_3, QString());
        pushButton_4 = new QPushButton(savecars);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(610, 30, 71, 27));

        retranslateUi(savecars);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(savecars);
    } // setupUi

    void retranslateUi(QDialog *savecars)
    {
        savecars->setWindowTitle(QApplication::translate("savecars", "Fuel Monitor", 0));
        pushButton_3->setText(QApplication::translate("savecars", "COMPLETE REPORT OF THIS CAR", 0));
        label->setText(QApplication::translate("savecars", "Choose a car:", 0));
#ifndef QT_NO_ACCESSIBILITY
        tab->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("savecars", "Date:", 0));
        label_3->setText(QApplication::translate("savecars", "Amount of value:", 0));
        label_4->setText(QApplication::translate("savecars", "Amount of fuel:", 0));
        label_5->setText(QApplication::translate("savecars", "odometer:", 0));
        addNewRegister->setText(QApplication::translate("savecars", "ADD THE NEW REGISTER", 0));
        SCdistance->clear();
        SCdistance->insertItems(0, QStringList()
         << QApplication::translate("savecars", "Miles", 0)
         << QApplication::translate("savecars", "Kilometers", 0)
        );
        SCcapacity->clear();
        SCcapacity->insertItems(0, QStringList()
         << QApplication::translate("savecars", "Liters", 0)
         << QApplication::translate("savecars", "Gallons", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("savecars", "Add a New Register", 0));
        MselectThisCar->setText(QApplication::translate("savecars", "Select this car", 0));
        label_6->setText(QApplication::translate("savecars", "Nickname:", 0));
        label_7->setText(QApplication::translate("savecars", "Manufacturer:", 0));
        label_8->setText(QApplication::translate("savecars", "Model:", 0));
        label_9->setText(QApplication::translate("savecars", "Year:", 0));
        label_10->setText(QApplication::translate("savecars", "Style:", 0));
        label_11->setText(QApplication::translate("savecars", "Number Plate:", 0));
        label_12->setText(QApplication::translate("savecars", "Engine:", 0));
        label_13->setText(QApplication::translate("savecars", "Cylinder Capacity:", 0));
        Mmodify->setText(QApplication::translate("savecars", "Modify a fuel register", 0));
        pushButton_7->setText(QApplication::translate("savecars", "Save", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("savecars", "Modify", 0));
        label_14->setText(QApplication::translate("savecars", "Manufacturer:", 0));
        label_15->setText(QApplication::translate("savecars", "Year:", 0));
        label_16->setText(QApplication::translate("savecars", "Number Plate:", 0));
        pushButton_8->setText(QApplication::translate("savecars", "Delete", 0));
        pushButton_9->setText(QApplication::translate("savecars", "Select this car", 0));
        label_17->setText(QApplication::translate("savecars", "Engine:", 0));
        label_18->setText(QApplication::translate("savecars", "Model:", 0));
        label_19->setText(QApplication::translate("savecars", "Style:", 0));
        pushButton_10->setText(QApplication::translate("savecars", "Delete a fuel register", 0));
        label_20->setText(QApplication::translate("savecars", "Nickname:", 0));
        label_21->setText(QApplication::translate("savecars", "Cylinder Capacity:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tan_3), QApplication::translate("savecars", "Delete", 0));
        pushButton_4->setText(QApplication::translate("savecars", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class savecars: public Ui_savecars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECARS_H
