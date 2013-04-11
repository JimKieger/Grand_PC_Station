#-------------------------------------------------
#
# Project created by QtCreator 2013-04-06T19:09:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AppleJack
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    displaywidget.cpp \
    saveloadsettings.cpp \
    SearchForGamesPage.cpp \
    DisplayGamesWindow.cpp

HEADERS  += mainwindow.h \
    displaywidget.h \
    saveloadsettings.h

FORMS    += mainwindow.ui
