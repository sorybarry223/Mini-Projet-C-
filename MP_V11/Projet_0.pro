#-------------------------------------------------
#
# Project created by QtCreator 2021-02-16T14:10:42
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projet_0
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp \
    user.cpp \
    utilisateur.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    secdialog.h \
    user.h \
    utilisateur.h \
    qcustomplot.h

FORMS    += mainwindow.ui \
    secdialog.ui \
    utilisateur.ui
