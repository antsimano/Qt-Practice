#include <QCoreApplication>
#include <QDebug>

void display(QString *value) {
    qInfo() << "The pointer:" << value;
    qInfo() << "The address:" << &value;
    qInfo() << "The data:" << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Bryan"; //Stack - C++ manages this
    QString *description = new QString("Hello pointer"); //Heap - We manage this

    // qInfo() << description;

    display(description);

    delete description;

    // display(description); //No longer exists!

    return a.exec();
}
