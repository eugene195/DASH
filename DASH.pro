TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    inputprocessor.cpp \
    userinput.cpp \
    command.cpp \
    builtins/changedirectory.cpp \
    builtins/printworkingdirectory.cpp \
    steps/tokenizestep.cpp \
    builtins/exit.cpp \
    steps/executecommand.cpp \
    steps/mapexecutabletooptions.cpp

HEADERS += \
    inputprocessor.h \
    easylogging++.h \
    userinput.h \
    command.h \
    builtins/abstractbuiltin.h \
    builtins/changedirectory.h \
    builtins/printworkingdirectory.h \
    steps/tokenizestep.h \
    builtins/exit.h \
    steps/executecommand.h \
    steps/abstractprocessingstep.h \
    steps/mapexecutabletooptions.h

