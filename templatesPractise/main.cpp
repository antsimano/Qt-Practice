#include <QCoreApplication>
#include <QDebug>

template<class T>
T add(T a, T b) {
    return a + b;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int integ = add<int>(4,6);
    qInfo() << integ;

    double dob = add<double>(5.55,4.02);
    qInfo() << dob;

    QString word = add<QString>(QString("Hello "), QString("World!"));
    qInfo() << word;

    bool trueFalse = add<bool>(false,true);
    qInfo() << trueFalse;

    return a.exec();
}
