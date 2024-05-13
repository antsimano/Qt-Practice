#include <QCoreApplication>
#include <QDebug>
#include "dog.h"
#include "cat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat cat;
    cat.setObjectName("Ghost");

    Dog dog;
    dog.setObjectName("Fido");

    // dog.chase(); // Zero for sender, nothing was emitted

    QObject::connect(&dog,&Dog::bark,&cat,&Cat::scared);
    QObject::connect(&cat,&Cat::run,&dog,&Dog::chase);

    emit dog.bark();

    return a.exec();
}
