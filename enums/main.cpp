#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // int red = 0;
    // int green = 1;
    // int blue = 3467;

    enum Color {red = 100,green = 55,blue = 256};
    Color myColor = Color::red;

    qInfo() << "Color:" << myColor;

    return a.exec();
}
