#include "androidauto.h"


AndroidAuto::AndroidAuto(QWidget *parent)
    : font("Arial",24,QFont::Bold)
{
    //m_pluginSettings.eventListeners = QStringList() << "UsbConnectionListenerPlugin::UsbDeviceAdded";

    gst_init(NULL, NULL);



    s_message="No phone connected";



    l_c=false;



    logo.load(":/img/auto.png");

    is_waitting=true;

    setAttribute(Qt::WA_NativeWindow,true);

    setMouseTracking(true);

    try_auto=new QTimer(this);

    try_auto->setSingleShot(true);

    loading_aim=new QTimer(this);



    QObject::connect(try_auto,&QTimer::timeout,this,&AndroidAuto::startAA);

    QObject::connect(loading_aim,&QTimer::timeout,this,&AndroidAuto::load_aim);


    headunit=new Headunit(this);

    QObject::connect(headunit,&Headunit::deviceConnected,this,&AndroidAuto::message);

    QObject::connect(headunit,&Headunit::statusChanged,this,&AndroidAuto::status_info);

    QObject::connect(headunit,&Headunit::resetAA,this,&AndroidAuto::waitAA);

    QObject::connect(headunit,&Headunit::failure,this,&AndroidAuto::close);






   // this->setStyleSheet("background-color:\"black\"");



    //this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);


  //  this->findChild<QLabel*>("auto_msg")->setText(s_message);

    if((!loading_aim->isActive())&&(this->findChild<QLabel*>("auto_msg")))
    {

    loading_aim->start(250);
    }

}

QObject *AndroidAuto::getContextProperty(){
    return qobject_cast<QObject *>(headunit);
}


void AndroidAuto::init(){

    repaint();

    headunit->init(this);

    qDebug()<<this->size();

    headunit->setOutputSize(this->size());
}

void AndroidAuto::paintEvent(QPaintEvent *event)
{

   // qDebug()<<"Painting";

   /* QPainter paint(this);

    paint.setFont(font);

    paint.translate(this->size().width()/2,this->size().height()/2);

    paint.scale(this->size().width()/800.f,this->size().height()/480.f);

    paint.drawPixmap(-logo.size().width()/2,-logo.size().height()/2,logo.size().width(),logo.size().height(),logo);

    paint.setBrush(Qt::green);

    paint.drawText(-(s_message.length()*font.pointSize())/3,(logo.size().width()/2)+font.pointSize()*2,s_message);*/

}

void AndroidAuto::waitAA()
{
    try_auto->start(500);
}


void AndroidAuto::startAA()
{


    headunit->startHU();


}

void AndroidAuto::stopAA()
{

    delete headunit;

}


void AndroidAuto::resizeVideo()
{

  //  this->resize(headunit->videoWidth(),headunit->videoHeight());


}

void AndroidAuto::message(QVariant message)
{

    qDebug()<<message;

}


void AndroidAuto::mousePressEvent(QMouseEvent *event)
{

    if(event->button()==Qt::LeftButton)
    {

    QPointF in_pos=event->pos();
    QPoint pos;

    pos.setX(in_pos.x());
    pos.setY(in_pos.y());


    headunit->mouseDown(pos);

    }

}

void AndroidAuto::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {

    QPointF in_pos=event->pos();
    QPoint pos;

    pos.setX(in_pos.x());
    pos.setY(in_pos.y());


    headunit->mouseUp(pos);

    }

}

void AndroidAuto::mouseMoveEvent(QMouseEvent *event)
{

    if(event->buttons()&Qt::LeftButton)
    {

    QPointF in_pos=event->pos();
    QPoint pos;

    pos.setX(in_pos.x());
    pos.setY(in_pos.y());


    headunit->mouseMove(pos);

    }

}

void AndroidAuto::status_info()
{

    switch (headunit->status()) {
    case Headunit::hu_status::NO_CONNECTION:

        qDebug()<<"HU is not connected";

        is_waitting=true;

        s_message="No phone connected";

       this->findChild<QLabel*>("auto_msg")->setText(s_message);
        this->findChild<QLabel*>("auto_msg")->setVisible(true);
        this->findChild<QLabel*>("auto_icon")->setVisible(true);

        if(!loading_aim->isActive())
        {

        loading_aim->start(250);
        }

        break;
    case Headunit::hu_status::VIDEO_WAITING:

        qDebug()<<"Video is standby";

        s_message="Connected, waitting for video";

        this->findChild<QLabel*>("auto_msg")->setText(s_message);
       this->findChild<QLabel*>("auto_msg")->setVisible(true);
       this->findChild<QLabel*>("auto_icon")->setVisible(true);

        if(!loading_aim->isActive())
        {

        loading_aim->start(250);
        }

        break;
    case Headunit::hu_status::RUNNING:

        qDebug()<<"Video is streamed";

        s_message="Connected!";

       this->findChild<QLabel*>("auto_msg")->setText(s_message);
        this->findChild<QLabel*>("auto_msg")->setVisible(false);
        this->findChild<QLabel*>("auto_icon")->setVisible(false);

        if(loading_aim->isActive())
        {

        loading_aim->stop();
        }

        break;
    default:
        break;
    }

    repaint();

}

void AndroidAuto::resizeEvent(QResizeEvent *event)
{



    headunit->setOutputSize(event->size());



}

void AndroidAuto::closeEvent(QCloseEvent *event)
{

    qDebug()<<"Closing window";

    stopAA();

    this->close();

}

void AndroidAuto::load_aim()
{


this->findChild<QLabel*>("auto_msg")->setText(s_message);

s_message+='.';

l_c++;



if(l_c>=4)
{
l_c=0;

s_message.truncate(s_message.length()-4);
}

}
