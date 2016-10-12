TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Cell.cpp \
    Net.cpp \
    readFile.cpp \
    site.cpp

DISTFILES += \
    placer_MiMa.pro.user \
    README.md \
    FPGA-example1.pl \
    FPGA-example1.nets \
    FPGA-example1.sitemap

HEADERS += \
    Cell.h \
    main.h \
    Net.h \
    readFile.h \
    site.h
