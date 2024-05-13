#include <QCoreApplication>
#include <QDebug>

void test(QString value) { //Stack - COPY
    qInfo() << &value << "Size:" << value.length();
} //Destroys the copy

void testPtr(QString *value) { //Stack - Pointing
    qInfo() << value << "Size:" << value->length(); //Correct syntax, pointing to the object
    qInfo() << &value << "Size:" << value->length(); //Wrong syntax, referencing to the pointer
} //Destroys the pointer

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; //Stack
    qInfo() << &name << "Size:" << name.length();

    test(name);
    testPtr(&name);

    return a.exec();
}
