#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

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

    QLineEdit* le_streamUrl;
    QPushButton* pb_connectToStream;

private slots:
    void connectToStream();
};
#endif // MAINWINDOW_H
