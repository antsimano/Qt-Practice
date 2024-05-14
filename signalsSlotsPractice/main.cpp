#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "monitor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test obj;
    Monitor monitor;

    // obj.connect(&obj,&Test::close,&monitor,&Monitor::close);
    monitor.connect(&monitor,&Monitor::close,&obj,&Test::close);
    // QObject::connect(&obj,&Test::close,&a,&QCoreApplication::quit, Qt::QueuedConnection);
    QObject::connect(&monitor,&Monitor::close,&a,&QCoreApplication::quit, Qt::QueuedConnection);

    qInfo() << "Closing the application...";
    monitor.closing();

    // return a.exec();
    int value = a.exec();

    qInfo() << "Exit code:" << value;
    return value;
}
