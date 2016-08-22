#-------------------------------------------------
#
# Project created by QtCreator 2016-08-19T14:55:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = threaddlg
TEMPLATE = app


SOURCES += main.cpp\
        threaddlg.cpp \
    workthread.cpp

HEADERS  += threaddlg.h \
    workthread.h

FORMS    += threaddlg.ui
