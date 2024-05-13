#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; // QString is not a QObject => so it can be copied
    qInfo() << "My name is at: " << &name << " = " <<name;

    // Animal cat(&a, "Fluffy");
    // Animal dog(&a, "Fido");
    Animal person(&a, name);

    person.sayHello("Hola");

    // cat.name = "My Cat";
    // dog.name = "My Dog";

    // qInfo() << cat.name;
    // qInfo() << dog.name;

    return a.exec();
}
