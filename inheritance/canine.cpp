#include "canine.h"

Canine::Canine(QObject *parent)
    : Mamal{parent}
{
    qInfo() << this << "constructed";
}
