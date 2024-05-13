#include <QCoreApplication>
#include <QDebug>

void test(int age) {
    // Over 21 to be an adult
    try {
        if(age <= 0) throw QString("Not a valid age");
        if(age < 21) throw QString("You are not an adult");
    } catch(QString e) {
        qCritical() << e;
        return;
    } catch(...) {
        qCritical() << "Unknown Error";
        return;
    }

    // Finally
    qInfo() << "You are" << age << "years old";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test(14);
    test(40);
    test(-3);

    return a.exec();
}
