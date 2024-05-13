#include "mamal.h"

Mamal::Mamal(QObject *parent)
    : Animal{parent}
{
    qInfo() << this << "constructed";
}
