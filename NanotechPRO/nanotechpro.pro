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
    main.cpp \
    loading/doprogress.cpp \
    widget/pages_list/widget_pages_list.cpp \
    style/styleloader.cpp

HEADERS += \
    nanotechpro.h \
    Version/version.h \
    loading/doprogress.h \
    widget/pages_list/widget_pages_list.h \
    style/styleloader.h


FORMS += \
    nanotechpro.ui \
    widget/pages_list/widget_pages_list.ui

QT+= core gui widgets

RESOURCES += \
    images/img.qrc \
    style/stylesheet.qrc

RC_FILE = myapp.rc
