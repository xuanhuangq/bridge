#-------------------------------------------------
#
# Project created by QtCreator 2019-12-09T09:09:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bridge
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    means.cpp \
    database.cpp \
    contract.cpp

HEADERS  += mainwindow.h \
    means.h \
    database.h \
    contract.h

FORMS    += mainwindow.ui
