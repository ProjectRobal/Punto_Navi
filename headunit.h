#pragma once
#ifndef HEADUNITPLAYER_H
#define HEADUNITPLAYER_H
//#define RPI

#define max_attempts 25

#include <atomic>
#include <QApplication>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QPoint>
#include <QVariant>
#include <QSettings>
//#include <QQuickItem>
#include <QBluetoothLocalDevice>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <gst/gst.h>
//#include <gst/interfaces/xoverlay.h>
#include <gst/video/videooverlay.h>
#include <gst/app/gstappsrc.h>
#include <gst/app/gstappsink.h>




#include "hu_uti.h"
#include "hu_aap.h"
#include "glib_utils.h"

class Headunit;

class DesktopEventCallbacks : public IHUConnectionThreadEventCallbacks {

private:
    Headunit * headunit;
public:
    DesktopEventCallbacks(Headunit *hu){
        headunit = hu;
    }
    virtual int MediaPacket(int chan, uint64_t timestamp, const byte * buf, int len) override;
    virtual int MediaStart(int chan) override;
    virtual int MediaStop(int chan) override;
    virtual void MediaSetupComplete(int chan) override;
    virtual void DisconnectionOrError() override;
    virtual void CustomizeOutputChannel(int chan, HU::ChannelDescriptor::OutputStreamChannel& streamChannel) override;
    virtual void AudioFocusRequest(int chan, const HU::AudioFocusRequest& request) override;
    virtual void VideoFocusRequest(int chan, const HU::VideoFocusRequest& request) override;
    virtual std::string GetCarBluetoothAddress() override;
    virtual void PhoneBluetoothReceived(std::string address) override;

    void VideoFocusHappened(bool hasFocus, bool unrequested);
};

class Headunit : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(int outputWidth MEMBER m_outputWidth NOTIFY outputResized)
   // Q_PROPERTY(int outputHeight MEMBER m_outputHeight NOTIFY outputResized)
   // Q_PROPERTY(int videoWidth READ videoWidth NOTIFY videoResized)
   // Q_PROPERTY(int videoHeight READ videoHeight NOTIFY videoResized)
    //Q_PROPERTY(hu_status status READ status NOTIFY statusChanged)

public:
    Headunit(QObject *parent = nullptr);
    ~Headunit();
    int startHU();
    int init(QWidget * videoItem);

    enum hu_status{
        NO_CONNECTION,
        VIDEO_WAITING,
        RUNNING
    };

    Q_ENUMS(hu_status)
    void stopPipelines();
    void setOutputSize(const QSize _size);
    void setVideoWidth(const int a);
    void setVideoHeight(const int a);
    void setStatus(hu_status status);
    int intialize_video(QWidget * videoItem);
    int videoWidth();
    int videoHeight();
    void touchEvent(HU::TouchInfo::TOUCH_ACTION action, QPoint *point);
    hu_status status();

    GstElement *mic_pipeline = nullptr;
    GstElement *aud_pipeline = nullptr;
    GstElement *au1_pipeline = nullptr;
    GstElement *vid_pipeline = nullptr;

    IHUAnyThreadInterface* g_hu = nullptr;
signals:
    void outputResized();
    void videoResized();
    void deviceConnected(QVariantMap notification);
    void btConnectionRequest(QString address);
    void videoSurfaceChanged();
    void statusChanged();
    void gst_error();
    void resetAA();
    void failure();

public slots:
    bool mouseDown(QPoint point);
    bool mouseMove(QPoint point);
    bool mouseUp(QPoint point);
    bool keyEvent(QString key);
    void startAA();
    void endAA();

private:
    HUServer *headunit;

    DesktopEventCallbacks callbacks;
    HU::TouchInfo::TOUCH_ACTION lastAction = HU::TouchInfo::TOUCH_ACTION_RELEASE;
    int m_videoWidth = 800;
    int m_videoHeight = 480;
    int m_outputWidth = 800;
    int m_outputHeight = 480;
    bool huStarted = false;
    //GstAppSrc *vid_src = nullptr;
    hu_status m_status = NO_CONNECTION;
    static GstFlowReturn read_mic_data(GstElement *appsink, Headunit * _this);
    static gboolean bus_callback(GstBus *bus, GstMessage *message, gpointer *ptr);

    static uint64_t get_cur_timestamp();
     uint8_t error_counter;
};
#endif // HEADUNITPLAYER_H
