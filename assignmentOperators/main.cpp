#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int value = 15; // assign
    qInfo() << value;

    value += 10; // add 10
    qInfo() << value;

    value -= 30; // subtract 30
    qInfo() << value;

    value *= 20; // multiply by 20
    qInfo() << value;

    value /= 25; // divide by 25
    qInfo() << value;

    return a.exec();
}
