#include <QCoreApplication>
#include <QDebug>

template<class T>
void display(T value) {
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    display<int>(4);
    display<double>(3.14);
    display<QString>(QString("Hello"));

    QObject obj;
    display<QObject*>(&obj);

    return a.exec();
}
