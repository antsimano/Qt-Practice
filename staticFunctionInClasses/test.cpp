#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructed";
}

void Test::doStuff()
{
    qInfo() << this << "doStuff";
    Test::doOtherStuff()
        ;}

void Test::doOtherStuff()
{
    // "this" does not exist
    // qInfo() << this << "doOtherStuff";
    // doStuff(); // No instance, cannot call the other function!

    // We can still run code without an instance!
    qInfo() << "doOtherStuff";

}
