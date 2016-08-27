TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    inputprocessor.cpp \
    command.cpp \
    tokenizestep.cpp \
    executecommand.cpp \
    findcommandexecutable.cpp \
    mapexecutabletooptions.cpp

HEADERS += \
    inputprocessor.h \
    command.h \
    abstractprocessingstep.h \
    tokenizestep.h \
    executecommand.h \
    easylogging++.h \
    findcommandexecutable.h \
    mapexecutabletooptions.h

