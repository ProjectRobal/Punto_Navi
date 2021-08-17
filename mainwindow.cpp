#include "menu.h"
#include "intro.h"
#include "aa_headunit.h"
#include "gpsshowtime.h"
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


   allocate_widget(0);


    fmrpi=new QProcess(this);

    s_rds=new QLocalSocket(this);

    gps_info= QGeoPositionInfoSource::createDefaultSource(this);



QObject::connect(fmrpi,&QProcess::errorOccurred,this,&MainWindow::fm_error);

QObject::connect(fmrpi,&QProcess::errorOccurred,this,&MainWindow::fm_error);

if(gps_info)
{

QObject::connect(gps_info,SIGNAL(positionUpdated(QGeoPositionInfo)),this,SLOT(look_gps(QGeoPositionInfo)));

gps_info->startUpdates();

}
else
{
    qDebug()<<"No gps source avaliable!!!";
}
//QObject::connect(s_rds,&QLocalSocket::errorOccurred,this,&MainWindow::rds_error);


start_fm();

turn_rds();


}


void MainWindow::look_gps(const QGeoPositionInfo& info)
{

emit emit_gps(info);

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


    }

   // QObject::connect(n_widget,&MenuEntry::back_to,this,&MainWindow::go_to_scene);

    //QObject::connect(n_widget,&MenuEntry::reset_fm,this,&MainWindow::turn_fm);

    //QObject::connect(n_widget,&MenuEntry::reset_rds,this,&MainWindow::turn_rds);

    //QObject::connect(n_widget,&MenuEntry::rds_msg,this,&MainWindow::rds_msg);

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
    get_settings



    if(_settings.value("fm/run").toBool())
    {


        fmrpi->start();

         qDebug()<<fmrpi->readAllStandardOutput();
         qDebug()<<fmrpi->readAllStandardError();

    }
    else
    {

        fmrpi->close();

    }


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

    QString f_prog=FM_prog;

    //QString arg;

    get_settings

    f_prog+="--ctl "+rds_pip;

    f_prog+="--freq "+_settings.value("fm/freq").toString();

    QStringList args;

    args<<"-fS16_LE"<<"-r"<<"44100"<<"-Dplughw:1,0"<<"-c"<<"2"<<"-"<<"|"<<"./pi_fm_adv"<<"--aduio"<<"-";


    fmrpi->start(QString("arecord"),args);



    turn_rds();
    turn_fm();

}


void MainWindow::rds_msg(QString msg)
{

    if(s_rds->state()==QLocalSocket::ConnectedState)
    {

        qDebug()<<"RDS msg: "<<msg;

        s_rds->write(msg.toUtf8());

    }


}


