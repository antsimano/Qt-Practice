#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;
    Animal fish;

    cat.setObjectName("Kitty");
    dog.setObjectName("Fido");
    fish.setObjectName("Nemo");

    cat.speak("meow");
    dog.speak("bark");
    fish.speak("bubbles");

    return a.exec();
}
