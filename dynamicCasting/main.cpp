#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

// Dynamic cast

// dynamic_cast can be used only with pointers and references to objects.

void testDrive(Car* obj) {
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj) {
    obj->drive();
    obj->stop();
    obj->goFast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* player1 = new RaceCar(&a);
    testDrive(player1); //implicit conversion

    // Correct way
    Car* obj = dynamic_cast<Car*>(player1); //explicitly convert
    if(obj) testDrive(obj);

    // Not convertable, will result in 0
    Feline* cat = new Feline(&a);
    Car* catCar = dynamic_cast<Car*>(cat);
    qInfo() << "CatCar:" << catCar;
    if(catCar) testDrive(catCar);

    return a.exec();
}
