#include <QCoreApplication>
#include <QDebug>
#include "test.h"

void wow() {
    // Automatic memory management
    std::unique_ptr<Test> t(new Test()); //Created this in memory
    t->doStuff();

    // Pointer automatically deleted for us!
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Starting";
    wow();
    qInfo() << "Finished";

    return a.exec();
}
