#ifndef STREAMER_H
#define STREAMER_H

#include <QObject>

class Streamer : public QObject
{
    Q_OBJECT
public:
    explicit Streamer(QObject *parent = nullptr);

signals:

};

#endif // STREAMER_H
