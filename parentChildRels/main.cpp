#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test *parent = new Test(&a); //Creating
    parent->dog = new Animal(parent);
    delete parent; //Deleting

    return a.exec();
    // a is deconstructed, because the parent has been deleted :)
}
