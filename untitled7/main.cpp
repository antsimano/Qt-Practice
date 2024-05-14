#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 36; //can change
    const int id = 215; // cannot change

    // id = 12;
    qInfo() << "Id:" << id;

    return a.exec();
}
