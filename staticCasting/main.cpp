#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

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

    Car* car = new Car(&a);
    qInfo() << car;
    // race((RaceCar*)car); // don't do this, implicit may result in issues, and there is no way of testing if it's okay

    RaceCar* racer = static_cast<RaceCar*>(car); //converting our car into a racecar
    qInfo() << racer;
    if(racer) race(racer);

    // This will not work, and will error:
    // Feline* catCar = static_cast<Feline*>(racer); //converting our car into a feline
    // qInfo() << catCar;
    // if(catCar) hiss(catCar);

    return a.exec();
}
