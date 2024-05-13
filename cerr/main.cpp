#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // C++ standard out
    cout << "Standard out" << endl;

    // C++ standard err
    cerr << "Standard error";

    return a.exec();
}
