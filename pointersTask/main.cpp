#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "calc.h"

int calcDogYears(int age) {
    int dogYears = age * 7;
    qInfo() << "Dog years:" << dogYears;
    return dogYears;
}

int calcCatYears(int age) {
    int catYears = age * 9;
    qInfo() << "Cat years:" << catYears;
    return catYears;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calc *calc = new Calc();
    int age = 0;

    qInfo() << "Please enter your age:";
    std::cin >> age;

    calcDogYears(age);
    calcCatYears(age);

    delete calc;

    return a.exec();
}
