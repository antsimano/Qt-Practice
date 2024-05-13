#include "feline.h"

Feline::Feline(QObject *parent)
    : Mamal{parent}
{
    qInfo() << this << "constructed";
}
