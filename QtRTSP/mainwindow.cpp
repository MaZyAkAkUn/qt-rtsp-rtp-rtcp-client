#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ly_main = new QVBoxLayout();
    streamer = new Streamer();
    streamDisplay = new StreamDisplay();
    ly_main->addWidget(streamDisplay);

}

MainWindow::~MainWindow()
{
}

