#-------------------------------------------------
#
# Project created by QtCreator 2014-09-11T13:33:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FuelMonitor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    car.cpp \
    gasoline.cpp \
    newcar1.cpp \
    dialogsavedcars.cpp

HEADERS  += mainwindow.h \
    car.h \
    gasoline.h \
    newcar1.h \
    dialogsavedcars.h

FORMS    += mainwindow.ui \
    newcar1.ui \
    dialogsavedcars.ui
