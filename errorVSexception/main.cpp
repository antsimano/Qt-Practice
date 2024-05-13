#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do {
        int max = 44;
        int div = 0;

        qInfo() << "Enter a number to divide by (or Zero for an issue!)";
        cin >> div;

        int answer = max / div; //Possible Exception
        qInfo() << answer;

    } while (true);

    return a.exec();
}
