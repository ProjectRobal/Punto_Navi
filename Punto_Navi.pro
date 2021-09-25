

CONFIG += c++14 plugin link_pkgconfig -force-pkg-config
QT += core gui widgets bluetooth x11extras multimedia multimediawidgets serialport positioning
DESTDIR = $${PWD}/

#DEFINES += RPI

INCLUDEPATH +=$$PWD/headunit/hu
INCLUDEPATH +=$$PWD/headunit/hu/generated.x64
INCLUDEPATH +=$$PWD/headunit/common
INCLUDEPATH += /home/windows/raspi/sysroot/usr/local/include/libusb-1.0/


LIBS += -L/home/windows/raspi/sysroot/usr/lib/arm-linux-gnueabihf/ -lprotobuf


PKGCONFIG += libssl libcrypto libusb-1.0 glib-2.0 gobject-2.0
PKGCONFIG += gstreamer-1.0 gstreamer-app-1.0 gstreamer-video-1.0
PKGCONFIG +=  libudev protobuf

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

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
    aa_headunit.cpp \
    androidauto.cpp \
    ./headunit.cpp \
    ./headunit/hu/hu_aad.cpp \
    ./headunit/hu/hu_aap.cpp \
    ./headunit/hu/hu_ssl.cpp \
    ./headunit/hu/hu_tcp.cpp \
    ./headunit/hu/hu_usb.cpp \
    ./headunit/hu/hu_uti.cpp \
    ./headunit/common/glib_utils.cpp \
    ./headunit/hu/generated.x64/hu.pb.cc \
    ./custombutton.cpp \
    ./hollowcircle.cpp \
    ./intro.cpp \
    ./main.cpp \
    ./mainwindow.cpp \
    ./menu.cpp \
    ./menuentry.cpp \
    ./oclock.cpp \
    ./settings.cpp \
    ./switch.cpp \
    ./gps_data.cpp \
    ./qserialgeoinfosource.cpp \
    gpsshowtime.cpp \
    jukebox.cpp \
    messagebox.cpp \
    radioinfo.cpp \
    timechanger.cpp


HEADERS += \
    ./SetManager.h \
    ./aa_headunit.h \
    ./androidauto.h \
    ./headunit.h \
    ./headunit/hu/hu_aad.h \
    ./headunit/hu/hu_aap.h \
    ./headunit/hu/hu_ssl.h \
    ./headunit/hu/hu_tcp.h \
    ./headunit/hu/hu_usb.h \
    ./headunit/hu/hu_uti.h \
    ./headunit/hu/generated.x64/hu.pb.h \
    ./headunit/common/glib_utils.h    \
    ./custombutton.h \
    ./hollowcircle.h \
    ./intro.h \
    ./mainwindow.h \
    ./menu.h \
    ./menuentry.h \
    ./oclock.h \
    ./settings.h \
    ./switch.h \
    ./gps_data.h \
    ./qserialgeoinfosource.h \
    gpsshowtime.h \
    jukebox.h \
    messagebox.h \
    radioinfo.h \
    timechanger.h


FORMS += \
    aa_headunit.ui \
    gpsshowtime.ui \
    jukebox.ui \
    mainwindow.ui \
    menu.ui \
    messagebox.ui \
    settings.ui \
    timechanger.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    ../raspi/sysroot/include/QtProtobufProtobuf/QtCore.proto \
    ../raspi/sysroot/include/QtProtobufProtobuf/QtGui.proto \
    config.json \
    aa_settings.ini \ \
    stylesheet/default.css
