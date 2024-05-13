#include "calc.h"

Calc::Calc(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Calc constructed";
}

Calc::~Calc()
{
    qInfo() << this << "Calc deconstructed";
}
