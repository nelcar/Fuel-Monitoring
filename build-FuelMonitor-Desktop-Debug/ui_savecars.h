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
    QDateEdit *dateEdit;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton;
    QWidget *tab_2;
    QWidget *tan_3;
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
        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(160, 20, 141, 27));
        doubleSpinBox = new QDoubleSpinBox(tab);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(160, 60, 141, 27));
        doubleSpinBox->setMaximum(1e+06);
        doubleSpinBox_2 = new QDoubleSpinBox(tab);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(160, 100, 141, 27));
        doubleSpinBox_2->setMaximum(100000);
        doubleSpinBox_3 = new QDoubleSpinBox(tab);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(160, 140, 141, 27));
        doubleSpinBox_3->setMaximum(10000);
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(330, 140, 71, 22));
        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(410, 140, 81, 22));
        radioButton_3 = new QRadioButton(tab);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(330, 60, 71, 22));
        radioButton_4 = new QRadioButton(tab);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(410, 60, 117, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 190, 561, 27));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tan_3 = new QWidget();
        tan_3->setObjectName(QStringLiteral("tan_3"));
        tabWidget->addTab(tan_3, QString());
        pushButton_4 = new QPushButton(savecars);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 0, 99, 27));

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
        radioButton->setText(QApplication::translate("savecars", "Liters", 0));
        radioButton_2->setText(QApplication::translate("savecars", "Gallons", 0));
        radioButton_3->setText(QApplication::translate("savecars", "Miles", 0));
        radioButton_4->setText(QApplication::translate("savecars", "Kilometers", 0));
        pushButton->setText(QApplication::translate("savecars", "ADD THE NEW REGISTER", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("savecars", "Add a New Register", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("savecars", "Modify", 0));
        tabWidget->setTabText(tabWidget->indexOf(tan_3), QApplication::translate("savecars", "Delete", 0));
        pushButton_4->setText(QApplication::translate("savecars", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class savecars: public Ui_savecars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECARS_H
