#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>

#include "streamer.h"
#include "streamdisplay.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Streamer* streamer;
    StreamDisplay* streamDisplay;
    QVBoxLayout* ly_main;
};
#endif // MAINWINDOW_H
