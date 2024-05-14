#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int addTen(int age) {
    return age + 10;

}

int dogYears(int value) {
    return value * 7;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age";
    cin >> age;

    qInfo() << "Ten:" << addTen(age);
    qInfo() << "Age in dog years:" << dogYears(age);

    return a.exec();
}
