#include <QCoreApplication>
#include <QDebug>

void test(int number) {
    // Scope
    number = 50;
    qInfo() << "2 - Number is: " << &number << " = " << number;
}

int main(int argc, char *argv[])
{
    // Scope
    QCoreApplication a(argc, argv);

    int number = 75;
    qInfo() << "1 - Number is: " << &number << " = " << number;
    test(number);

    // qInfo() << "3 - Number is: " << &number << " = " << number;

    bool ok = true;
    if (ok) {
        //
        int number = 1000;
        qInfo() << "3 - Number is: " << &number << " = " << number;
    }

    qInfo() << "4 - Number is: " << &number << " = " << number;

    return a.exec();
}
