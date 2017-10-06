#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T10:14:12
#
#-------------------------------------------------

QT       += core
QT       -= gui

TEMPLATE = app
TARGET = versions

win32{
   DESTDIR = ../exe
}

unix{
   DESTDIR = /opt/Qt_programming/Copysupports/bin
}

CONFIG   += console
CONFIG   -= app_bundle

SOURCES += main.cpp
