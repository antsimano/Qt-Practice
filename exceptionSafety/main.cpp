#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDivision(int max) {
    int value;
    qInfo() << "Enter a number";
    cin >> value;

    if(value == 0) {
        qWarning() << "Cannot be zero";
        return false;
    }

    if(value > 5) {
        qWarning() << "Should be less than 5";
        return false;
    }

    if(value == 1) {
        qWarning() << "Should be greater than 1";
        return false;
    }

    int result = max / value;
    qInfo() << "Result = " << result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 44;
    do {
        // Do sg here

    } while(doDivision((max)));

    return a.exec();
}
