#include <QCoreApplication>
#include <QDebug>

template<class T, class F>
T add(T valueT, F valueF) {
    return valueT + valueF;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << add<int,double>(1, 4.6); // results in "5"
    qInfo() << add(55, true); // it builds, runs, and results in "56"
    qInfo() << add(true, 55); // results in "true"
    // qInfo() << add(55, "true"); // this errors, will not build
    qInfo() << add("Bryan", 55); // it builds, runs, and results in sg crazy ("rayview.h")

    return a.exec();
}
