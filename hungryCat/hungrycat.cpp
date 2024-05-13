#include "hungrycat.h"

HungryCat::HungryCat(QObject *parent)
    : QObject{parent}
{}

void HungryCat::meow()
{
    for(int i = 0; i < 3; i++) {
        qInfo() << "meow";
    }
}
