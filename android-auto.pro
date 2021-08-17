TEMPLATE = app
CONFIG += c++11 plugin link_pkgconfig
QT += core gui widgets quick bluetooth x11extras multimedia multimediawidgets
DEFINES += QT_DEPRECATED_WARNINGS
INCLUDEPATH += $${PWD}/../../includes
DESTDIR = $${PWD}/

PKGCONFIG += libssl libcrypto libusb-1.0 glib-2.0 gobject-2.0
PKGCONFIG += gstreamer-1.0 gstreamer-app-1.0 gstreamer-video-1.0
PKGCONFIG += protobuf libudev

build_qtgst{
DEFINES += BUILD_QTGST
include("qtgst.pro")

    CONFIG += x11
    eglfs{
    CONFIG -= x11
    DEFINES += GST_GL_HAVE_PLATFORM_EGL
    DEFINES += HAVE_QT_EGLFS
    }

    wayland{
    QT+=gui-private
    CONFIG -= x11
    DEFINES += HAVE_QT_WAYLAND
    DEFINES += GST_GL_HAVE_WINDOW_WAYLAND
    }

    x11{
    DEFINES += GST_GL_HAVE_WINDOW_X1
    DEFINES += HAVE_QT_X11
    }
}

SOURCES += \
    androidauto.cpp \
    headunit.cpp \
    headunit/hu/hu_aad.cpp \
    headunit/hu/hu_aap.cpp \
    headunit/hu/hu_ssl.cpp \
    headunit/hu/hu_tcp.cpp \
    headunit/hu/hu_usb.cpp \
    headunit/hu/hu_uti.cpp \
    headunit/common/glib_utils.cpp \
    headunit/hu/generated.x64/hu.pb.cc \
    main.cpp


INCLUDEPATH +=$$PWD/headunit/hu
INCLUDEPATH +=$$PWD/headunit/hu/generated.x64
INCLUDEPATH +=$$PWD/headunit/common




INSTALLS += target

HEADERS += \
    androidauto.h \
    headunit.h \
    headunit/hu/hu_aad.h \
    headunit/hu/hu_aap.h \
    headunit/hu/hu_ssl.h \
    headunit/hu/hu_tcp.h \
    headunit/hu/hu_usb.h \
    headunit/hu/hu_uti.h \
    headunit/hu/generated.x64/hu.pb.h \
    headunit/common/glib_utils.h

DISTFILES += \
    config.json \
    aa_settings.ini
