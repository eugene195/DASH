TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    inputprocessor.cpp \
    tokenizestep.cpp \
    executecommand.cpp \
    mapexecutabletooptions.cpp \
    userinput.cpp \
    command.cpp

HEADERS += \
    inputprocessor.h \
    abstractprocessingstep.h \
    tokenizestep.h \
    executecommand.h \
    easylogging++.h \
    mapexecutabletooptions.h \
    userinput.h \
    command.h

