#DEFINES += NANOTECHPRO_LIBRARY


#TARGET = ../../exe/Copysupport

TEMPLATE = app
TARGET = nanotechpro

win32{
   DESTDIR = C:/Mik/Qt_programming/nano/Nanotex/exe
}

unix{
   DESTDIR = /opt/Qt_programming/Copysupports/bin
}


# NanotechPRO files

SOURCES += \
    nanotechpro.cpp \
    main.cpp

HEADERS += \
    nanotechpro.h \
    Version/version.h


FORMS += \
    nanotechpro.ui

QT+= core gui widgets

RESOURCES += \
    images/img.qrc

RC_FILE = myapp.rc
