#include "menu.h"
#include "intro.h"
#include "aa_headunit.h"
#include "gpsshowtime.h"
#include "jukebox.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QScreen *screen = QGuiApplication::primaryScreen();

    screen_size=new QRect(screen->geometry());



    SetManager::check_settings();



    //qDebug()<<"Window size: "<<screen_size->width()<<" "<<screen_size->height();
    n_widget=nullptr;


    ui->setupUi(this);



   // this->setFixedSize(800,600);


   qDebug()<<"Window size: "<<screen_size->width()<<" "<<screen_size->height();


   //create messageBox

   msg=new MessageBox(this);

   msg->setGeometry(0,0,2*this->size().width()/3,3*this->size().height()/4);

   msg->move(this->size().width()/2-msg->size().width()/2,this->size().height()/2-msg->size().height()/2);

   msg->show();


   allocate_widget(0);


    fmrpi=new QProcess(this);

    s_rds=new QLocalSocket(this);





QObject::connect(fmrpi,&QProcess::errorOccurred,this,&MainWindow::fm_error);

QObject::connect(fmrpi,&QProcess::errorOccurred,this,&MainWindow::fm_error);

gps_info= QGeoPositionInfoSource::createDefaultSource(this);

if(gps_info)
{

QObject::connect(gps_info,SIGNAL(positionUpdated(QGeoPositionInfo)),this,SLOT(look_gps(QGeoPositionInfo)));

QObject::connect(gps_info,SIGNAL(error(QGeoPositionInfo)),this,SLOT(gps_error(QGeoPositionInfo)));

gps_info->startUpdates();

}
else
{
    qDebug()<<"No gps source avaliable!!!";
}
//QObject::connect(s_rds,&QLocalSocket::errorOccurred,this,&MainWindow::rds_error);


initializeSettings();



}


void MainWindow::look_gps(const QGeoPositionInfo& info)
{

emit emit_gps(info);

}

void MainWindow::gps_error(QGeoPositionInfoSource::Error e)
{
    qDebug()<<e;

    emit emit_gps_error(e);
}



void MainWindow::back_to_clock()
{
    //if(stack->currentIndex()==1)
   // {

     //   stack->setCurrentIndex(2);

   // }

   // lazy->stop();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_msg(QString _msg)
{
    msg->show_msg(_msg);
    msg->show();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape)
    {
        this->close();
    }
}

void MainWindow::go_to_scene(int i)
{




allocate_widget(i);



}

void MainWindow::allocate_widget(int w)
{

    ui->centralwidget->layout()->removeWidget(n_widget);


    if(n_widget!=NULL)
    {

     delete n_widget;

    }

    switch(w)
    {
        case 0: //Intro

        n_widget=new Intro(this);

        ui->centralwidget->layout()->addWidget(n_widget);


        break;

    case 1: //Menu

    n_widget=new Menu(this);

    ui->centralwidget->layout()->addWidget(n_widget);


    break;

    case 2: //AndroidAuto

    n_widget=new AA_Headunit(this);

    ui->centralwidget->layout()->addWidget(n_widget);


    break;

    case 3: //Settings

    n_widget=new Settings(this);

    ui->centralwidget->layout()->addWidget(n_widget);


    break;

    case 4: //GPS debug

    n_widget=new GPSShowTime(this);

    ui->centralwidget->layout()->addWidget(n_widget);


    break;

    case 5: //JukeBox

    n_widget=new JukeBox(this);

    ui->centralwidget->layout()->addWidget(n_widget);


    break;


    }

    n_widget->connect(this);

}



void MainWindow::turn_rds()
{

    s_rds->setServerName(rds_pip);

    get_settings

            if(_settings.value("fm/rds").toBool())
            {


                s_rds->open(QIODevice::WriteOnly);

            }
            else
            {

                s_rds->close();

            }



}


void MainWindow::turn_fm()
{

    start_fm();
}

void MainWindow::fm_error(QProcess::ProcessError error)
{

    switch(error)
    {
    case QProcess::FailedToStart:

        qDebug()<<"Error FM servie, failed to start";

        qDebug()<<fmrpi->readAllStandardOutput();

        break;

    case QProcess::Crashed:

        qDebug()<<"FM service has crashed";

        break;


    case QProcess::UnknownError:

        qDebug()<<"FM service unknown error";

        break;

    default:

        qDebug()<<"Unidentified FM service error";


    }


}

void MainWindow::rds_error(QLocalSocket::LocalSocketError socketError)
{
    switch (socketError) {
    case QLocalSocket::ConnectionRefusedError:

        qDebug()<<"RDS Error: connection refused";

        break;

    case QLocalSocket::PeerClosedError:

        qDebug()<<"RDS Error: peer closed connection";

        break;

    case QLocalSocket::ServerNotFoundError:

        qDebug()<<"RDS Error: pipeline not found";

        break;

    case QLocalSocket::SocketAccessError:

        qDebug()<<"RDS Error: access error";

        break;

    case QLocalSocket::SocketResourceError:

        qDebug()<<"RDS Error: not enough resources";

        break;

    case QLocalSocket::SocketTimeoutError:

        qDebug()<<"RDS Error: operation timeout";

        break;

    case QLocalSocket::DatagramTooLargeError:

        qDebug()<<"RDS Error: datagram too large";

        break;

    case QLocalSocket::ConnectionError:

        qDebug()<<"RDS Error: connection error";

        break;

    case QLocalSocket::UnsupportedSocketOperationError:

        qDebug()<<"RDS Error: unsupported operation error";

        break;

    case QLocalSocket::OperationError:

        qDebug()<<"RDS Error: operation error";

        break;

    default:

        qDebug()<<"RDS Error: unidentified error";
        break;
    }

}

void MainWindow::start_fm()
{

    fmrpi->kill();

    get_settings

    QStringList args;

    if(_settings.value("fm/on").toBool())
    {


    if(_settings.value("fm/rds").toBool())
    {
        args<<"--ctl"<<rds_pip;
    }

    args<<"--freq"<<_settings.value("fm/freq").toString()<<"-fS16_LE"<<"-r"<<"44100"<<"-Dplughw:1,0"<<"-c"<<"2"<<"-"<<"|"<<"./utils/pi_fm_adv"<<"--aduio"<<"-";

    fmrpi->start(FM_prog,args);
    }

}

void MainWindow::initializeSettings()
{
    get_settings

    if(_settings.value("fm/run").toBool())
    {
        start_fm();
    }

}


void MainWindow::rds_msg(QString msg)
{

    if(s_rds->state()==QLocalSocket::ConnectedState)
    {

        qDebug()<<"RDS msg: "<<msg;

        s_rds->write(msg.toUtf8());

    }


}


