#ifndef MONITOR_H
#define MONITOR_H

#include <QObject>
#include <QDebug>

class Monitor : public QObject
{
    Q_OBJECT
public:
    explicit Monitor(QObject *parent = nullptr);

    void closing();

signals:
    void close();
};

#endif // MONITOR_H
