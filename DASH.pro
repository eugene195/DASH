TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    inputprocessor.cpp \
    tokenizestep.cpp

HEADERS += \
    inputprocessor.h \
    command.h \
    abstractprocessingstep.h \
    tokenizestep.h

