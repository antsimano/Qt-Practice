#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // C++ way
    cout << "Hello" << endl;

    // Qt way
    qInfo() << "Hello";

    int age = 36;
    cout << age;
    cout << endl;
    cout << flush;

    return a.exec();
}
