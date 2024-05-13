#include "feline.h"
#include <QDebug>

Feline::Feline(QObject *parent)
    : QObject{parent}
{}

void Feline::speak()
{
    qInfo() << this << "meow";
}
