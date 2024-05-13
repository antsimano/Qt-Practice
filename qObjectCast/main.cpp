#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"
#include "dog.h"

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

    // Derived class to the base
    RaceCar* myCar = new RaceCar(&a);
    Car* car = qobject_cast<Car*>(myCar);
    car->drive();

    // Base to the derived class
    RaceCar* fastCar = qobject_cast<RaceCar*>(car);
    fastCar->goFast();

    // Will not work with non-QObjects
    // Dog* fido = qobject_cast<Dog*>(fastCar);

    return a.exec();
}
