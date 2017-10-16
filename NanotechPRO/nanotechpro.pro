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
    style/styleloader.cpp \
    widget/stream_data/widget_stream_data.cpp \
    widget/sedimentation/widget_sedimentation.cpp

HEADERS += \
    nanotechpro.h \
    Version/version.h \
    loading/doprogress.h \
    widget/pages_list/widget_pages_list.h \
    style/styleloader.h \
    widget/stream_data/widget_stream_data.h \
    widget/sedimentation/widget_sedimentation.h


FORMS += \
    nanotechpro.ui \
    widget/pages_list/widget_pages_list.ui \
    widget/stream_data/widget_stream_data.ui \
    widget/sedimentation/widget_sedimentation.ui

QT+= core gui widgets

RESOURCES += \
    images/img.qrc \
    style/stylesheet.qrc

RC_FILE = myapp.rc
