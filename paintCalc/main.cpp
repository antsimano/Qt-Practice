#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

double wallSurfaceCalc(int height, int width) {
    double wallSurface = height * width;
    return wallSurface;
}

double paintCalc(double surface) {
    double paintAmount = surface * 0.25;
    return paintAmount;
}
int surface = 0;
int paintNeeded = 0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int height;
    qInfo() << "Please enter the ceiling height in meters:";
    cin >> height;

    for(int i = 0; i < 20; i++) {
        int width;
        qInfo() << "Please enter a wall width in meters or 0 to stop:";
        cin >> width;
        if(width == 0) {
            qInfo() << "Total amount of paint in liters:" << paintNeeded;
            break;
        }
        surface += wallSurfaceCalc(height, width);
        paintNeeded = paintCalc(surface);
        // qInfo() << "Paint needed so far:" << paintNeeded << "liters.";
    }

    return a.exec();
}
