#-------------------------------------------------
#
# Project created by QtCreator 2015-05-09T11:17:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EpsiFileCompressorApplication
TEMPLATE = app


SOURCES += main.cpp\
    filepool.cpp \
    zipper.cpp \
    zippedbuffer.cpp \
    writer.cpp \
    zippedbufferpool.cpp \
    epsifilecompressor.cpp

HEADERS  += \
    filepool.h \
    zipper.h \
    zippedbuffer.h \
    writer.h \
    zippedbufferpool.h \
    epsifilecompressor.h

FORMS    += \
    mainwindow.ui
