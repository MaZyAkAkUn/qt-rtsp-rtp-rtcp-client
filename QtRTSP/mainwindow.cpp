#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ly_main = new QVBoxLayout();
    streamer = new Streamer();
    streamDisplay = new StreamDisplay();
//    ly_main->addWidget(streamDisplay);
    le_streamUrl = new QLineEdit();
    ly_main->addWidget(le_streamUrl);
    pb_connectToStream = new QPushButton("Connect");

    connect(pb_connectToStream, &QPushButton::clicked, this, &MainWindow::connectToStream);



}

MainWindow::~MainWindow()
{
}

void MainWindow::connectToStream()
{
    //here we will connect to stream using provided url

    QUrl streamUrl = le_streamUrl->text();
    if(!streamUrl.isEmpty()){
        //do stream stuff

        //at first we need to check if provided link valid and sserver active
        if(streamUrl.isValid()){
            //now check server, we can ping it or lets try to send init RTSP request, lets dive into RFC

        }

    }

}

