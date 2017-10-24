#DEFINES += NANOTECHPRO_LIBRARY


#TARGET = ../../exe/Copysupport
QT+= core gui widgets
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
    widget/sedimentation/widget_sedimentation.cpp \
    widget/sys_stage/widget_sys_stage.cpp \
    widget/pages_mini_list/pages_mini_list.cpp \
    widget/rootAdmin/widget_rootadmin.cpp

HEADERS += \
    nanotechpro.h \
    loading/doprogress.h \
    widget/pages_list/widget_pages_list.h \
    style/styleloader.h \
    widget/stream_data/widget_stream_data.h \
    widget/sedimentation/widget_sedimentation.h \
    widget/sys_stage/widget_sys_stage.h \
    widget/pages_mini_list/pages_mini_list.h \
    widget/rootAdmin/widget_rootadmin.h


FORMS += \
    nanotechpro.ui \
    widget/pages_list/widget_pages_list.ui \
    widget/stream_data/widget_stream_data.ui \
    widget/sedimentation/widget_sedimentation.ui \
    widget/sys_stage/widget_sys_stage.ui \
    widget/pages_mini_list/pages_mini_list.ui \
    widget/rootAdmin/widget_rootadmin.ui



RESOURCES += \
    images/img.qrc \
    style/stylesheet.qrc \
    fonts/font.qrc \
    images/scheme/scheme.qrc

RC_FILE = myapp.rc
