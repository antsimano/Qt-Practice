#include "monitor.h"

Monitor::Monitor(QObject *parent)
    : QObject{parent}
{}

void Monitor::closing()
{
    qInfo() << "Switching off...";
    emit close();
}
