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
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_deleteregisters
{
public:
    QPushButton *pushButton_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *deleteregisters)
    {
        if (deleteregisters->objectName().isEmpty())
            deleteregisters->setObjectName(QStringLiteral("deleteregisters"));
        deleteregisters->resize(645, 258);
        pushButton_2 = new QPushButton(deleteregisters);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 96, 99, 101));
        radioButton_2 = new QRadioButton(deleteregisters);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(510, 170, 81, 22));
        radioButton_4 = new QRadioButton(deleteregisters);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(510, 90, 101, 22));
        radioButton_3 = new QRadioButton(deleteregisters);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(430, 90, 71, 22));
        lineEdit_2 = new QLineEdit(deleteregisters);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 130, 141, 27));
        comboBox = new QComboBox(deleteregisters);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(250, 10, 281, 31));
        label_4 = new QLabel(deleteregisters);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 180, 111, 17));
        lineEdit = new QLineEdit(deleteregisters);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 90, 141, 27));
        label_2 = new QLabel(deleteregisters);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 60, 67, 17));
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
        radioButton = new QRadioButton(deleteregisters);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(430, 170, 71, 22));
        label_5 = new QLabel(deleteregisters);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 100, 91, 17));
        dateEdit = new QDateEdit(deleteregisters);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(280, 50, 141, 27));
        label_3 = new QLabel(deleteregisters);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 140, 121, 17));
        lineEdit_3 = new QLineEdit(deleteregisters);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 170, 141, 27));

        retranslateUi(deleteregisters);

        QMetaObject::connectSlotsByName(deleteregisters);
    } // setupUi

    void retranslateUi(QDialog *deleteregisters)
    {
        deleteregisters->setWindowTitle(QApplication::translate("deleteregisters", "Delete Registrer", 0));
        pushButton_2->setText(QApplication::translate("deleteregisters", "Delete", 0));
        radioButton_2->setText(QApplication::translate("deleteregisters", "Gallons", 0));
        radioButton_4->setText(QApplication::translate("deleteregisters", "Kilometers", 0));
        radioButton_3->setText(QApplication::translate("deleteregisters", "Miles", 0));
        label_4->setText(QApplication::translate("deleteregisters", "Amount of fuel:", 0));
        label_2->setText(QApplication::translate("deleteregisters", "Date:", 0));
        label->setText(QApplication::translate("deleteregisters", "Select Registrer:", 0));
        pushButton->setText(QApplication::translate("deleteregisters", "Select this", 0));
        radioButton->setText(QApplication::translate("deleteregisters", "Liters", 0));
        label_5->setText(QApplication::translate("deleteregisters", "Podometer:", 0));
        label_3->setText(QApplication::translate("deleteregisters", "Amount of value:", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteregisters: public Ui_deleteregisters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEREGISTERS_H
