#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 36;
    double height = 5.08;

    qInfo() << "Age:" << age;
    qInfo() << "Height" << height;

    age = 36.90;
    qInfo() << "Age:" << age;

    signed int dogs = -1;
    qInfo() << "Dogs:" << dogs;
    dogs = 15;
    qInfo() << "Dogs:" << dogs;

    unsigned int cats = -1;
    qInfo() << "Cats:" << cats;
    cats = 15;
    qInfo() << "Cats:" << cats;

    qInfo() << sizeof(dogs);
    qInfo() << sizeof(cats);
    qInfo() << sizeof(height);

    return a.exec();
}
