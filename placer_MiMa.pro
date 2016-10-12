TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Cell.cpp \
    Net.cpp \
    readFile.cpp

DISTFILES += \
    placer_MiMa.pro.user \
    README.md

HEADERS += \
    Cell.h \
    main.h \
    Net.h \
    readFile.h
