#include <QCoreApplication>
#include <QDebug>

// Passing by Value - Copy - QObjects do not like being copied!
void testVal(int x) {
    x = x * 10; // Modifying the copy
    qInfo() << "TestVal X:" << x; // 50
} // copy is destroyed!

// Passing by Reference
void testRef(int &y) {
    y = y * 10; // Modifying original
    qInfo() << "TestVal Y:" << y; // 50
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x = 5;
    qInfo() << "Main X:" << x; // 5
    testVal(x); // COPY - Value
    qInfo() << "Main X:" << x; // 5

    int y = 5;
    qInfo() << "Main Y:" << y; // 5
    testRef(y); // Ref - Value
    qInfo() << "Main Y:" << y; // 50

    return a.exec();
}
