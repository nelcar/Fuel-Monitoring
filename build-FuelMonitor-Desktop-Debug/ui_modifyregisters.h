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
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_modifyregisters
{
public:
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QRadioButton *radioButton;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QRadioButton *radioButton_4;
    QLabel *label_5;
    QLabel *label_3;
    QRadioButton *radioButton_3;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *modifyregisters)
    {
        if (modifyregisters->objectName().isEmpty())
            modifyregisters->setObjectName(QStringLiteral("modifyregisters"));
        modifyregisters->resize(623, 253);
        radioButton_2 = new QRadioButton(modifyregisters);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(520, 180, 81, 22));
        label_4 = new QLabel(modifyregisters);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 190, 111, 17));
        radioButton = new QRadioButton(modifyregisters);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(440, 180, 71, 22));
        label_2 = new QLabel(modifyregisters);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 70, 67, 17));
        dateEdit = new QDateEdit(modifyregisters);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(290, 60, 141, 27));
        radioButton_4 = new QRadioButton(modifyregisters);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(520, 100, 101, 22));
        label_5 = new QLabel(modifyregisters);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 110, 91, 17));
        label_3 = new QLabel(modifyregisters);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 150, 121, 17));
        radioButton_3 = new QRadioButton(modifyregisters);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(440, 100, 71, 22));
        label = new QLabel(modifyregisters);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 211, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        comboBox = new QComboBox(modifyregisters);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(260, 20, 281, 31));
        lineEdit = new QLineEdit(modifyregisters);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 100, 141, 27));
        lineEdit_2 = new QLineEdit(modifyregisters);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 140, 141, 27));
        lineEdit_3 = new QLineEdit(modifyregisters);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 180, 141, 27));
        pushButton = new QPushButton(modifyregisters);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 70, 99, 27));
        pushButton_2 = new QPushButton(modifyregisters);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 106, 99, 101));

        retranslateUi(modifyregisters);

        QMetaObject::connectSlotsByName(modifyregisters);
    } // setupUi

    void retranslateUi(QDialog *modifyregisters)
    {
        modifyregisters->setWindowTitle(QApplication::translate("modifyregisters", "Modify Register", 0));
        radioButton_2->setText(QApplication::translate("modifyregisters", "Gallons", 0));
        label_4->setText(QApplication::translate("modifyregisters", "Amount of fuel:", 0));
        radioButton->setText(QApplication::translate("modifyregisters", "Liters", 0));
        label_2->setText(QApplication::translate("modifyregisters", "Date:", 0));
        radioButton_4->setText(QApplication::translate("modifyregisters", "Kilometers", 0));
        label_5->setText(QApplication::translate("modifyregisters", "Podometer:", 0));
        label_3->setText(QApplication::translate("modifyregisters", "Amount of value:", 0));
        radioButton_3->setText(QApplication::translate("modifyregisters", "Miles", 0));
        label->setText(QApplication::translate("modifyregisters", "Select Registrer:", 0));
        pushButton->setText(QApplication::translate("modifyregisters", "Select this", 0));
        pushButton_2->setText(QApplication::translate("modifyregisters", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyregisters: public Ui_modifyregisters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYREGISTERS_H
