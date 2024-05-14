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

    // Create a racecar
    RaceCar* player1 = new RaceCar(&a);

    // Cast the racecar to its base
    Car* obj = dynamic_cast<Car*>(player1);
    if(obj) testDrive(obj);

    // Cast it without changing it
    RaceCar* speedster = static_cast<RaceCar*>(obj);
    if(speedster) race(speedster);

    // Reinterprit as a different type
    int* pointer = reinterpret_cast<int*>(speedster);
    qInfo() << "Pointer:" << pointer;
    qInfo() << "RaceCar:" << speedster;

    RaceCar* myCar = reinterpret_cast<RaceCar*>(pointer);
    qInfo() << "My car's color is" << myCar->color;
    race(myCar);

    Feline* cat = reinterpret_cast<Feline*>(pointer);
    // qInfo() << "Angry cat says:" << cat->hiss(); //This errors
    cat->hiss(); //This actually works
    cat->meow();

    Feline* cat2 = reinterpret_cast<Feline*>(player1);
    cat2->hiss();
    cat2->meow();

    return a.exec();
}
