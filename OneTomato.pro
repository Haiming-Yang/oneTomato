#-------------------------------------------------
#
# Project created by QtCreator 2015-08-24T15:52:51
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OneTomato
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    historicaltask.cpp \
    set.cpp \
    achivement.cpp \
    currenttask.cpp \
    newtask.cpp \
    TomatoConfig.cpp

HEADERS  += mainwindow.h \
    historicaltask.h \
    set.h \
    achivement.h \
    currenttask.h \
    newtask.h \
    TomatoConfig.h \
    numoftomato.h

FORMS    += mainwindow.ui \
    historicaltask.ui \
    set.ui \
    achivement.ui \
    currenttask.ui \
    newtask.ui

DISTFILES +=

RESOURCES += \
    button.qrc \
    bgi.qrc \
    sound.qrc
