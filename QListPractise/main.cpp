#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> ages;
    int age = 1;

    do {
        qInfo() << "Please enter an age";
        cin >> age;
        if(age > 0) {
            ages.append(age);
        }
    } while (age > 0); {
        qInfo() << "You entered the below valid ages:" << ages;
    }



    return a.exec();
}
