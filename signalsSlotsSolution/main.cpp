#include <QCoreApplication>
#include "test.h"
#include "monitor.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test obj;
    Monitor monitor;

    obj.connect(&obj,&Test::close,&monitor,&Monitor::closing);
    QObject::connect(&obj,&Test::close,&a,&QCoreApplication::quit, Qt::QueuedConnection);

    qInfo() << "Closing the application...";
    obj.kill();

    // return a.exec();
    int value = a.exec();

    qInfo() << "Exit code:" << value;
    return value;
}
