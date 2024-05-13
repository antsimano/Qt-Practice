#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString task = "Please take out the trash.";

    int max = 5;

    for(int i = 1; i < 99; i++) {
        qInfo() << "Wife: " << task;
        qWarning() << "Wife: I have asked you" << i << "times!";

        if(i >= max) {
            qInfo() << "Okay, I'm going...";
            break;
        }
    }

    return a.exec();
}
