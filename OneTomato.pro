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
    TomatoConfig.cpp \
    numoftomato.cpp \
    info.cpp \
    copper.cpp \
    sliver.cpp \
    gold.cpp \
    pt.cpp \
    diamond.cpp \
    king.cpp

HEADERS  += mainwindow.h \
    historicaltask.h \
    set.h \
    achivement.h \
    currenttask.h \
    newtask.h \
    TomatoConfig.h \
    numoftomato.h \
    info.h \
    copper.h \
    sliver.h \
    gold.h \
    pt.h \
    diamond.h \
    king.h

FORMS    += mainwindow.ui \
    historicaltask.ui \
    set.ui \
    achivement.ui \
    currenttask.ui \
    newtask.ui \
    info.ui \
    copper.ui \
    sliver.ui \
    gold.ui \
    pt.ui \
    diamond.ui \
    king.ui

DISTFILES +=

RESOURCES += \
    button.qrc \
    bgi.qrc \
    sound.qrc \
    honourimage.qrc
