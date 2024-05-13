#include <QCoreApplication>
#include <QDebug>

void test(QObject object) { //Copy
    qInfo() << &object << Q_FUNC_INFO;
}

void testPtr(QObject *object) { //Pointer
    qInfo() << object << Q_FUNC_INFO;
}

// QObject getObject() {
//     QObject o;
//     return o; //Return a copy - won't work!!!
// }

QObject* getObject() {
    QObject *o = new QObject(); //Warning, creatin in the heap
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject* p = getObject();
    testPtr(p);

    delete p;

    return a.exec();
}
