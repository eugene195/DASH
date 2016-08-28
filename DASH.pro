TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    inputprocessor.cpp \
    executecommand.cpp \
    mapexecutabletooptions.cpp \
    userinput.cpp \
    command.cpp \
    builtins/changedirectory.cpp \
    builtins/printworkingdirectory.cpp \
    steps/tokenizestep.cpp \
    builtins/exit.cpp

HEADERS += \
    inputprocessor.h \
    abstractprocessingstep.h \
    executecommand.h \
    easylogging++.h \
    mapexecutabletooptions.h \
    userinput.h \
    command.h \
    builtins/abstractbuiltin.h \
    builtins/changedirectory.h \
    builtins/printworkingdirectory.h \
    steps/tokenizestep.h \
    builtins/exit.h

