#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() <<"Please enter an age:";
    cin >> age;
    qInfo() << "You entered:" << age;

    return a.exec();
}
