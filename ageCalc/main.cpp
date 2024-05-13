#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Enter your age:";
    int age = 0;
    cin >> age;

    if(age >= 1 && age <= 120) {
        int dog_years = age * 7;
        qInfo() << "Your age in dog years is " << dog_years;
    } else {
        qWarning() << "Warning: Not a valid age!";
    }

    return a.exec();
}
