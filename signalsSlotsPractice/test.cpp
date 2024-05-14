#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{}

void Test::close()
{
    qInfo() << "Shutting down now";
}
