#-------------------------------------------------
#
# Project created by QtCreator 2015-03-03T16:04:07
#
#-------------------------------------------------

QT       += core gui
INCLUDEPATH+=d:/opencv/build/include/opencv \
                    d:/opencv/build/include/opencv2 \
                   d:/opencv/build/include
LIBS+=D:\opencv\build\x64\vc12\lib\opencv_ml2410d.lib
LIBS+=D:\opencv\build\x64\vc12\lib\opencv_calib3d2410d.lib
LIBS+=D:\opencv\build\x64\vc12\lib\opencv_contrib2410d.lib
LIBS+=D:\opencv\build\x64\vc12\lib\opencv_core2410d.lib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cvtool.cpp

HEADERS  += mainwindow.h \
    cvtool.h

FORMS    += mainwindow.ui

