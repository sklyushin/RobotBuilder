TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        builder.cpp \
        levelhundredenemy.cpp \
        leveloneenemy.cpp \
        main.cpp \
        robot.cpp \
        robotadjuster.cpp

HEADERS += \
    builder.h \
    levelhundredenemy.h \
    leveloneenemy.h \
    robot.h \
    robotadjuster.h
