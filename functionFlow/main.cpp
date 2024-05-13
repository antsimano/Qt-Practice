#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int calc(int offset, int age) {
    if(offset == 0) qFatal("Offset cannot be zero!");
    if(age <= 0 || age > 120) qFatal("Invalid Age! Please enter an age between 1 and 120!");
    return offset * age;
}

int catYears(int age) {
    return calc(9, age);
}

int dogYears(int age) {
    return calc(7, age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Please enter your age:";
    cin >> age;

    int cat = catYears(age);
    int dog = dogYears(age);

    qInfo() << "Dog:" << dog;
    qInfo() << "Cat:" << cat;

    return a.exec();
}
