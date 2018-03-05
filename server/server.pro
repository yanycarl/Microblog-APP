#-------------------------------------------------
#
# Project created by QtCreator 2017-03-17T19:10:06
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    thread.h

FORMS    += mainwindow.ui
