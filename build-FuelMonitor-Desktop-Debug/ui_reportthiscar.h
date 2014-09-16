/********************************************************************************
** Form generated from reading UI file 'reportthiscar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTTHISCAR_H
#define UI_REPORTTHISCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_reportthiscar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *gal_kil;
    QLineEdit *lit_kil;
    QLineEdit *kilo_day;
    QLineEdit *gal_day;
    QLineEdit *mon_day;
    QLineEdit *mon_lit;
    QLineEdit *gal_mil;
    QLineEdit *lit_mil;
    QLineEdit *mil_day;
    QLineEdit *lit_day;
    QLineEdit *mon_gal;
    QPushButton *pushButton;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *Tgalons;
    QLineEdit *Tliters;
    QLineEdit *Tmiles;
    QLineEdit *Tkilometers;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *Tmoney;
    QLineEdit *Tdays;

    void setupUi(QDialog *reportthiscar)
    {
        if (reportthiscar->objectName().isEmpty())
            reportthiscar->setObjectName(QStringLiteral("reportthiscar"));
        reportthiscar->resize(662, 416);
        label = new QLabel(reportthiscar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 160, 141, 16));
        label_2 = new QLabel(reportthiscar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 160, 131, 16));
        label_3 = new QLabel(reportthiscar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 200, 131, 16));
        label_4 = new QLabel(reportthiscar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(360, 200, 131, 16));
        label_5 = new QLabel(reportthiscar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 240, 121, 17));
        label_6 = new QLabel(reportthiscar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 240, 121, 17));
        label_7 = new QLabel(reportthiscar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 280, 121, 17));
        label_8 = new QLabel(reportthiscar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 280, 121, 17));
        label_9 = new QLabel(reportthiscar);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 320, 81, 17));
        label_10 = new QLabel(reportthiscar);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 320, 101, 17));
        label_11 = new QLabel(reportthiscar);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 360, 101, 17));
        label_12 = new QLabel(reportthiscar);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 10, 501, 61));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label_12->setFont(font);
        gal_kil = new QLineEdit(reportthiscar);
        gal_kil->setObjectName(QStringLiteral("gal_kil"));
        gal_kil->setEnabled(false);
        gal_kil->setGeometry(QRect(210, 160, 113, 27));
        lit_kil = new QLineEdit(reportthiscar);
        lit_kil->setObjectName(QStringLiteral("lit_kil"));
        lit_kil->setEnabled(false);
        lit_kil->setGeometry(QRect(210, 200, 113, 27));
        kilo_day = new QLineEdit(reportthiscar);
        kilo_day->setObjectName(QStringLiteral("kilo_day"));
        kilo_day->setEnabled(false);
        kilo_day->setGeometry(QRect(210, 240, 113, 27));
        gal_day = new QLineEdit(reportthiscar);
        gal_day->setObjectName(QStringLiteral("gal_day"));
        gal_day->setEnabled(false);
        gal_day->setGeometry(QRect(210, 280, 113, 27));
        mon_day = new QLineEdit(reportthiscar);
        mon_day->setObjectName(QStringLiteral("mon_day"));
        mon_day->setEnabled(false);
        mon_day->setGeometry(QRect(210, 320, 113, 27));
        mon_lit = new QLineEdit(reportthiscar);
        mon_lit->setObjectName(QStringLiteral("mon_lit"));
        mon_lit->setEnabled(false);
        mon_lit->setGeometry(QRect(210, 360, 113, 27));
        gal_mil = new QLineEdit(reportthiscar);
        gal_mil->setObjectName(QStringLiteral("gal_mil"));
        gal_mil->setEnabled(false);
        gal_mil->setGeometry(QRect(470, 160, 113, 27));
        lit_mil = new QLineEdit(reportthiscar);
        lit_mil->setObjectName(QStringLiteral("lit_mil"));
        lit_mil->setEnabled(false);
        lit_mil->setGeometry(QRect(470, 200, 113, 27));
        mil_day = new QLineEdit(reportthiscar);
        mil_day->setObjectName(QStringLiteral("mil_day"));
        mil_day->setEnabled(false);
        mil_day->setGeometry(QRect(470, 240, 113, 27));
        lit_day = new QLineEdit(reportthiscar);
        lit_day->setObjectName(QStringLiteral("lit_day"));
        lit_day->setEnabled(false);
        lit_day->setGeometry(QRect(470, 280, 113, 27));
        mon_gal = new QLineEdit(reportthiscar);
        mon_gal->setObjectName(QStringLiteral("mon_gal"));
        mon_gal->setEnabled(false);
        mon_gal->setGeometry(QRect(470, 320, 113, 27));
        pushButton = new QPushButton(reportthiscar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 360, 141, 27));
        label_13 = new QLabel(reportthiscar);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 80, 91, 17));
        label_14 = new QLabel(reportthiscar);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 110, 81, 17));
        label_15 = new QLabel(reportthiscar);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(210, 80, 81, 17));
        label_16 = new QLabel(reportthiscar);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(210, 110, 121, 17));
        Tgalons = new QLineEdit(reportthiscar);
        Tgalons->setObjectName(QStringLiteral("Tgalons"));
        Tgalons->setEnabled(false);
        Tgalons->setGeometry(QRect(110, 80, 91, 27));
        Tliters = new QLineEdit(reportthiscar);
        Tliters->setObjectName(QStringLiteral("Tliters"));
        Tliters->setEnabled(false);
        Tliters->setGeometry(QRect(110, 110, 91, 27));
        Tmiles = new QLineEdit(reportthiscar);
        Tmiles->setObjectName(QStringLiteral("Tmiles"));
        Tmiles->setEnabled(false);
        Tmiles->setGeometry(QRect(340, 80, 91, 27));
        Tkilometers = new QLineEdit(reportthiscar);
        Tkilometers->setObjectName(QStringLiteral("Tkilometers"));
        Tkilometers->setEnabled(false);
        Tkilometers->setGeometry(QRect(340, 110, 91, 27));
        label_17 = new QLabel(reportthiscar);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(460, 80, 91, 17));
        label_18 = new QLabel(reportthiscar);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(470, 110, 91, 17));
        Tmoney = new QLineEdit(reportthiscar);
        Tmoney->setObjectName(QStringLiteral("Tmoney"));
        Tmoney->setEnabled(false);
        Tmoney->setGeometry(QRect(560, 80, 91, 27));
        Tdays = new QLineEdit(reportthiscar);
        Tdays->setObjectName(QStringLiteral("Tdays"));
        Tdays->setEnabled(false);
        Tdays->setGeometry(QRect(560, 110, 91, 27));

        retranslateUi(reportthiscar);

        QMetaObject::connectSlotsByName(reportthiscar);
    } // setupUi

    void retranslateUi(QDialog *reportthiscar)
    {
        reportthiscar->setWindowTitle(QApplication::translate("reportthiscar", "Dialog", 0));
        label->setText(QApplication::translate("reportthiscar", "Gallons/Kilometers", 0));
        label_2->setText(QApplication::translate("reportthiscar", "Gallons/Miles", 0));
        label_3->setText(QApplication::translate("reportthiscar", "Liters/Kilometers", 0));
        label_4->setText(QApplication::translate("reportthiscar", "Liters/Miles", 0));
        label_5->setText(QApplication::translate("reportthiscar", "Kilometers/Day:", 0));
        label_6->setText(QApplication::translate("reportthiscar", "Miles/Day:", 0));
        label_7->setText(QApplication::translate("reportthiscar", "Gallons/Day:", 0));
        label_8->setText(QApplication::translate("reportthiscar", "Liters/Day:", 0));
        label_9->setText(QApplication::translate("reportthiscar", "Money/Day:", 0));
        label_10->setText(QApplication::translate("reportthiscar", "Money/Gallon:", 0));
        label_11->setText(QApplication::translate("reportthiscar", "Money/liters:", 0));
        label_12->setText(QApplication::translate("reportthiscar", "REPORT OF SELECTED CAR:", 0));
        pushButton->setText(QApplication::translate("reportthiscar", "Generate Report", 0));
        label_13->setText(QApplication::translate("reportthiscar", "Total Galons", 0));
        label_14->setText(QApplication::translate("reportthiscar", "Total Liters", 0));
        label_15->setText(QApplication::translate("reportthiscar", "Total Miles", 0));
        label_16->setText(QApplication::translate("reportthiscar", "Total Kilometers", 0));
        label_17->setText(QApplication::translate("reportthiscar", "Total Money", 0));
        label_18->setText(QApplication::translate("reportthiscar", "Total Days", 0));
    } // retranslateUi

};

namespace Ui {
    class reportthiscar: public Ui_reportthiscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTTHISCAR_H
