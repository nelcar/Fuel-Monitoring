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
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *mil_gal;
    QLineEdit *mil_lit;
    QLineEdit *mil_mon;
    QLineEdit *kil_gal;
    QLineEdit *kil_lit;
    QLineEdit *kil_mon;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *Rnickname;
    QLineEdit *Rmanufacturer;
    QLineEdit *Rmodel;
    QLineEdit *Rstyle;
    QLineEdit *Ryear;
    QLineEdit *RnumberPlate;
    QLineEdit *lineEdit_7;
    QLineEdit *Rengine;
    QLineEdit *Rcylinder;

    void setupUi(QDialog *reportthiscar)
    {
        if (reportthiscar->objectName().isEmpty())
            reportthiscar->setObjectName(QStringLiteral("reportthiscar"));
        reportthiscar->resize(978, 568);
        label = new QLabel(reportthiscar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 310, 141, 16));
        label_2 = new QLabel(reportthiscar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 350, 131, 16));
        label_3 = new QLabel(reportthiscar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 310, 131, 16));
        label_4 = new QLabel(reportthiscar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(300, 350, 131, 16));
        label_5 = new QLabel(reportthiscar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(300, 450, 121, 17));
        label_6 = new QLabel(reportthiscar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 450, 121, 17));
        label_7 = new QLabel(reportthiscar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 390, 121, 17));
        label_8 = new QLabel(reportthiscar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 390, 121, 17));
        label_9 = new QLabel(reportthiscar);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(600, 390, 81, 17));
        label_10 = new QLabel(reportthiscar);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(600, 350, 101, 17));
        label_11 = new QLabel(reportthiscar);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(600, 310, 101, 17));
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
        gal_kil->setGeometry(QRect(150, 310, 113, 27));
        lit_kil = new QLineEdit(reportthiscar);
        lit_kil->setObjectName(QStringLiteral("lit_kil"));
        lit_kil->setEnabled(false);
        lit_kil->setGeometry(QRect(440, 310, 113, 27));
        kilo_day = new QLineEdit(reportthiscar);
        kilo_day->setObjectName(QStringLiteral("kilo_day"));
        kilo_day->setEnabled(false);
        kilo_day->setGeometry(QRect(440, 450, 113, 27));
        gal_day = new QLineEdit(reportthiscar);
        gal_day->setObjectName(QStringLiteral("gal_day"));
        gal_day->setEnabled(false);
        gal_day->setGeometry(QRect(150, 390, 113, 27));
        mon_day = new QLineEdit(reportthiscar);
        mon_day->setObjectName(QStringLiteral("mon_day"));
        mon_day->setEnabled(false);
        mon_day->setGeometry(QRect(740, 390, 113, 27));
        mon_lit = new QLineEdit(reportthiscar);
        mon_lit->setObjectName(QStringLiteral("mon_lit"));
        mon_lit->setEnabled(false);
        mon_lit->setGeometry(QRect(740, 310, 113, 27));
        gal_mil = new QLineEdit(reportthiscar);
        gal_mil->setObjectName(QStringLiteral("gal_mil"));
        gal_mil->setEnabled(false);
        gal_mil->setGeometry(QRect(150, 350, 113, 27));
        lit_mil = new QLineEdit(reportthiscar);
        lit_mil->setObjectName(QStringLiteral("lit_mil"));
        lit_mil->setEnabled(false);
        lit_mil->setGeometry(QRect(440, 350, 113, 27));
        mil_day = new QLineEdit(reportthiscar);
        mil_day->setObjectName(QStringLiteral("mil_day"));
        mil_day->setEnabled(false);
        mil_day->setGeometry(QRect(150, 450, 113, 27));
        lit_day = new QLineEdit(reportthiscar);
        lit_day->setObjectName(QStringLiteral("lit_day"));
        lit_day->setEnabled(false);
        lit_day->setGeometry(QRect(440, 390, 113, 27));
        mon_gal = new QLineEdit(reportthiscar);
        mon_gal->setObjectName(QStringLiteral("mon_gal"));
        mon_gal->setEnabled(false);
        mon_gal->setGeometry(QRect(740, 350, 113, 27));
        pushButton = new QPushButton(reportthiscar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 30, 301, 27));
        label_13 = new QLabel(reportthiscar);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 250, 91, 17));
        label_14 = new QLabel(reportthiscar);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(580, 250, 81, 17));
        label_15 = new QLabel(reportthiscar);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(200, 250, 81, 17));
        label_16 = new QLabel(reportthiscar);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(760, 250, 121, 17));
        Tgalons = new QLineEdit(reportthiscar);
        Tgalons->setObjectName(QStringLiteral("Tgalons"));
        Tgalons->setEnabled(false);
        Tgalons->setGeometry(QRect(100, 250, 91, 27));
        Tliters = new QLineEdit(reportthiscar);
        Tliters->setObjectName(QStringLiteral("Tliters"));
        Tliters->setEnabled(false);
        Tliters->setGeometry(QRect(660, 250, 91, 27));
        Tmiles = new QLineEdit(reportthiscar);
        Tmiles->setObjectName(QStringLiteral("Tmiles"));
        Tmiles->setEnabled(false);
        Tmiles->setGeometry(QRect(280, 250, 91, 27));
        Tkilometers = new QLineEdit(reportthiscar);
        Tkilometers->setObjectName(QStringLiteral("Tkilometers"));
        Tkilometers->setEnabled(false);
        Tkilometers->setGeometry(QRect(880, 250, 91, 27));
        label_17 = new QLabel(reportthiscar);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(380, 250, 91, 17));
        label_18 = new QLabel(reportthiscar);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(600, 530, 91, 17));
        Tmoney = new QLineEdit(reportthiscar);
        Tmoney->setObjectName(QStringLiteral("Tmoney"));
        Tmoney->setEnabled(false);
        Tmoney->setGeometry(QRect(480, 250, 91, 27));
        Tdays = new QLineEdit(reportthiscar);
        Tdays->setObjectName(QStringLiteral("Tdays"));
        Tdays->setEnabled(false);
        Tdays->setGeometry(QRect(740, 530, 111, 27));
        label_19 = new QLabel(reportthiscar);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 490, 101, 17));
        label_20 = new QLabel(reportthiscar);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(600, 450, 101, 17));
        label_21 = new QLabel(reportthiscar);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 530, 91, 17));
        label_22 = new QLabel(reportthiscar);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(300, 490, 131, 17));
        label_23 = new QLabel(reportthiscar);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(300, 530, 121, 17));
        label_24 = new QLabel(reportthiscar);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(600, 490, 131, 17));
        mil_gal = new QLineEdit(reportthiscar);
        mil_gal->setObjectName(QStringLiteral("mil_gal"));
        mil_gal->setEnabled(false);
        mil_gal->setGeometry(QRect(150, 490, 113, 27));
        mil_lit = new QLineEdit(reportthiscar);
        mil_lit->setObjectName(QStringLiteral("mil_lit"));
        mil_lit->setEnabled(false);
        mil_lit->setGeometry(QRect(150, 530, 113, 27));
        mil_mon = new QLineEdit(reportthiscar);
        mil_mon->setObjectName(QStringLiteral("mil_mon"));
        mil_mon->setEnabled(false);
        mil_mon->setGeometry(QRect(740, 450, 113, 27));
        kil_gal = new QLineEdit(reportthiscar);
        kil_gal->setObjectName(QStringLiteral("kil_gal"));
        kil_gal->setEnabled(false);
        kil_gal->setGeometry(QRect(440, 490, 113, 27));
        kil_lit = new QLineEdit(reportthiscar);
        kil_lit->setObjectName(QStringLiteral("kil_lit"));
        kil_lit->setEnabled(false);
        kil_lit->setGeometry(QRect(440, 530, 113, 27));
        kil_mon = new QLineEdit(reportthiscar);
        kil_mon->setObjectName(QStringLiteral("kil_mon"));
        kil_mon->setEnabled(false);
        kil_mon->setGeometry(QRect(740, 490, 113, 27));
        label_25 = new QLabel(reportthiscar);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 90, 81, 17));
        label_26 = new QLabel(reportthiscar);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 130, 101, 17));
        label_27 = new QLabel(reportthiscar);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 170, 101, 17));
        label_28 = new QLabel(reportthiscar);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(300, 130, 101, 17));
        label_29 = new QLabel(reportthiscar);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(300, 90, 67, 17));
        label_30 = new QLabel(reportthiscar);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(300, 170, 111, 17));
        label_31 = new QLabel(reportthiscar);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(600, 90, 67, 17));
        label_32 = new QLabel(reportthiscar);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(600, 130, 141, 17));
        Rnickname = new QLineEdit(reportthiscar);
        Rnickname->setObjectName(QStringLiteral("Rnickname"));
        Rnickname->setEnabled(false);
        Rnickname->setGeometry(QRect(130, 90, 131, 27));
        Rmanufacturer = new QLineEdit(reportthiscar);
        Rmanufacturer->setObjectName(QStringLiteral("Rmanufacturer"));
        Rmanufacturer->setEnabled(false);
        Rmanufacturer->setGeometry(QRect(130, 130, 131, 27));
        Rmodel = new QLineEdit(reportthiscar);
        Rmodel->setObjectName(QStringLiteral("Rmodel"));
        Rmodel->setEnabled(false);
        Rmodel->setGeometry(QRect(130, 170, 131, 27));
        Rstyle = new QLineEdit(reportthiscar);
        Rstyle->setObjectName(QStringLiteral("Rstyle"));
        Rstyle->setEnabled(false);
        Rstyle->setGeometry(QRect(420, 90, 131, 27));
        Ryear = new QLineEdit(reportthiscar);
        Ryear->setObjectName(QStringLiteral("Ryear"));
        Ryear->setEnabled(false);
        Ryear->setGeometry(QRect(420, 130, 131, 27));
        RnumberPlate = new QLineEdit(reportthiscar);
        RnumberPlate->setObjectName(QStringLiteral("RnumberPlate"));
        RnumberPlate->setEnabled(false);
        RnumberPlate->setGeometry(QRect(420, 170, 131, 27));
        lineEdit_7 = new QLineEdit(reportthiscar);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setEnabled(false);
        lineEdit_7->setGeometry(QRect(960, 520, 131, 27));
        Rengine = new QLineEdit(reportthiscar);
        Rengine->setObjectName(QStringLiteral("Rengine"));
        Rengine->setEnabled(false);
        Rengine->setGeometry(QRect(730, 90, 131, 27));
        Rcylinder = new QLineEdit(reportthiscar);
        Rcylinder->setObjectName(QStringLiteral("Rcylinder"));
        Rcylinder->setEnabled(false);
        Rcylinder->setGeometry(QRect(730, 130, 131, 27));

        retranslateUi(reportthiscar);

        QMetaObject::connectSlotsByName(reportthiscar);
    } // setupUi

    void retranslateUi(QDialog *reportthiscar)
    {
        reportthiscar->setWindowTitle(QApplication::translate("reportthiscar", "Report", 0));
        label->setText(QApplication::translate("reportthiscar", "Gallons/Kilometers:", 0));
        label_2->setText(QApplication::translate("reportthiscar", "Gallons/Miles:", 0));
        label_3->setText(QApplication::translate("reportthiscar", "Liters/Kilometers:", 0));
        label_4->setText(QApplication::translate("reportthiscar", "Liters/Miles:", 0));
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
        label_19->setText(QApplication::translate("reportthiscar", "Miles/Gallon:", 0));
        label_20->setText(QApplication::translate("reportthiscar", "Miles/Money:", 0));
        label_21->setText(QApplication::translate("reportthiscar", "Miles/Liters:", 0));
        label_22->setText(QApplication::translate("reportthiscar", "Kilometers/Gallon:", 0));
        label_23->setText(QApplication::translate("reportthiscar", "Kilometers/Liters:", 0));
        label_24->setText(QApplication::translate("reportthiscar", "Kilometers/Money:", 0));
        label_25->setText(QApplication::translate("reportthiscar", "Nickname:", 0));
        label_26->setText(QApplication::translate("reportthiscar", "Manufacturer:", 0));
        label_27->setText(QApplication::translate("reportthiscar", "Model:", 0));
        label_28->setText(QApplication::translate("reportthiscar", "Year:", 0));
        label_29->setText(QApplication::translate("reportthiscar", "Style:", 0));
        label_30->setText(QApplication::translate("reportthiscar", "Number Plate:", 0));
        label_31->setText(QApplication::translate("reportthiscar", "Engine:", 0));
        label_32->setText(QApplication::translate("reportthiscar", "Cylinder Capacity:", 0));
    } // retranslateUi

};

namespace Ui {
    class reportthiscar: public Ui_reportthiscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTTHISCAR_H
