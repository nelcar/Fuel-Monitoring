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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_savecars
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *SCchooseCar;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *addDate;
    QDoubleSpinBox *addPodometer;
    QDoubleSpinBox *AddAmountValue;
    QDoubleSpinBox *addAmountFuel;
    QRadioButton *addLiters;
    QRadioButton *addGallons;
    QRadioButton *AddMiles;
    QRadioButton *addKilometers;
    QPushButton *addNewRegister;
    QWidget *tab_2;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *tan_3;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_9;
    QLabel *label_16;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_10;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLabel *label_19;
    QPushButton *pushButton_10;
    QLabel *label_20;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLabel *label_21;
    QLineEdit *lineEdit_16;
    QPushButton *pushButton_4;

    void setupUi(QDialog *savecars)
    {
        if (savecars->objectName().isEmpty())
            savecars->setObjectName(QStringLiteral("savecars"));
        savecars->resize(688, 418);
        pushButton_2 = new QPushButton(savecars);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 350, 261, 27));
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
        label_3->setGeometry(QRect(20, 100, 121, 17));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 111, 17));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 60, 91, 17));
        addDate = new QDateEdit(tab);
        addDate->setObjectName(QStringLiteral("addDate"));
        addDate->setGeometry(QRect(160, 20, 141, 27));
        addPodometer = new QDoubleSpinBox(tab);
        addPodometer->setObjectName(QStringLiteral("addPodometer"));
        addPodometer->setGeometry(QRect(160, 60, 141, 27));
        addPodometer->setMaximum(1e+06);
        AddAmountValue = new QDoubleSpinBox(tab);
        AddAmountValue->setObjectName(QStringLiteral("AddAmountValue"));
        AddAmountValue->setGeometry(QRect(160, 100, 141, 27));
        AddAmountValue->setMaximum(100000);
        addAmountFuel = new QDoubleSpinBox(tab);
        addAmountFuel->setObjectName(QStringLiteral("addAmountFuel"));
        addAmountFuel->setGeometry(QRect(160, 140, 141, 27));
        addAmountFuel->setMaximum(10000);
        addLiters = new QRadioButton(tab);
        addLiters->setObjectName(QStringLiteral("addLiters"));
        addLiters->setGeometry(QRect(330, 140, 71, 22));
        addGallons = new QRadioButton(tab);
        addGallons->setObjectName(QStringLiteral("addGallons"));
        addGallons->setGeometry(QRect(410, 140, 81, 22));
        AddMiles = new QRadioButton(tab);
        AddMiles->setObjectName(QStringLiteral("AddMiles"));
        AddMiles->setGeometry(QRect(330, 60, 71, 22));
        addKilometers = new QRadioButton(tab);
        addKilometers->setObjectName(QStringLiteral("addKilometers"));
        addKilometers->setGeometry(QRect(410, 60, 117, 22));
        addNewRegister = new QPushButton(tab);
        addNewRegister->setObjectName(QStringLiteral("addNewRegister"));
        addNewRegister->setGeometry(QRect(20, 190, 561, 27));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 10, 121, 27));
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
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 20, 113, 27));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(500, 20, 113, 27));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(230, 50, 113, 27));
        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(500, 50, 113, 27));
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(230, 80, 113, 27));
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(500, 80, 113, 27));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(230, 110, 113, 27));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(500, 110, 113, 27));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(150, 150, 471, 27));
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
        lineEdit_9 = new QLineEdit(tan_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(230, 110, 113, 27));
        label_16 = new QLabel(tan_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(370, 80, 101, 17));
        pushButton_8 = new QPushButton(tan_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 60, 99, 131));
        pushButton_9 = new QPushButton(tan_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 121, 27));
        lineEdit_10 = new QLineEdit(tan_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(500, 50, 113, 27));
        label_17 = new QLabel(tan_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(150, 110, 67, 17));
        label_18 = new QLabel(tan_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(150, 50, 61, 17));
        lineEdit_11 = new QLineEdit(tan_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(500, 80, 113, 27));
        lineEdit_12 = new QLineEdit(tan_3);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(500, 110, 113, 27));
        lineEdit_13 = new QLineEdit(tan_3);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(500, 20, 113, 27));
        label_19 = new QLabel(tan_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(150, 80, 51, 17));
        pushButton_10 = new QPushButton(tan_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(150, 150, 471, 27));
        label_20 = new QLabel(tan_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(150, 20, 71, 16));
        lineEdit_14 = new QLineEdit(tan_3);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(230, 20, 113, 27));
        lineEdit_15 = new QLineEdit(tan_3);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(230, 50, 113, 27));
        label_21 = new QLabel(tan_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(370, 110, 131, 17));
        lineEdit_16 = new QLineEdit(tan_3);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(230, 80, 113, 27));
        tabWidget->addTab(tan_3, QString());
        pushButton_4 = new QPushButton(savecars);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(610, 30, 71, 27));

        retranslateUi(savecars);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(savecars);
    } // setupUi

    void retranslateUi(QDialog *savecars)
    {
        savecars->setWindowTitle(QApplication::translate("savecars", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("savecars", "REPORT ALL CARS", 0));
        pushButton_3->setText(QApplication::translate("savecars", "COMPLETE REPORT OF THIS CAR", 0));
        label->setText(QApplication::translate("savecars", "Choose a car:", 0));
#ifndef QT_NO_ACCESSIBILITY
        tab->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("savecars", "Date:", 0));
        label_3->setText(QApplication::translate("savecars", "Amount of value:", 0));
        label_4->setText(QApplication::translate("savecars", "Amount of fuel:", 0));
        label_5->setText(QApplication::translate("savecars", "Podometer:", 0));
        addLiters->setText(QApplication::translate("savecars", "Liters", 0));
        addGallons->setText(QApplication::translate("savecars", "Gallons", 0));
        AddMiles->setText(QApplication::translate("savecars", "Miles", 0));
        addKilometers->setText(QApplication::translate("savecars", "Kilometers", 0));
        addNewRegister->setText(QApplication::translate("savecars", "ADD THE NEW REGISTER", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("savecars", "Add a New Register", 0));
        pushButton_5->setText(QApplication::translate("savecars", "Select this car", 0));
        label_6->setText(QApplication::translate("savecars", "Nickname:", 0));
        label_7->setText(QApplication::translate("savecars", "Manufacturer:", 0));
        label_8->setText(QApplication::translate("savecars", "Model:", 0));
        label_9->setText(QApplication::translate("savecars", "Year:", 0));
        label_10->setText(QApplication::translate("savecars", "Style:", 0));
        label_11->setText(QApplication::translate("savecars", "Number Plate:", 0));
        label_12->setText(QApplication::translate("savecars", "Engine:", 0));
        label_13->setText(QApplication::translate("savecars", "Cylinder Capacity:", 0));
        pushButton_6->setText(QApplication::translate("savecars", "Modify a fuel register", 0));
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
