#ifndef CANINE_H
#define CANINE_H

#include <QObject>
#include <QDebug>
#include "mamal.h"

class Canine : public Mamal
{
    Q_OBJECT
public:
    explicit Canine(QObject *parent = nullptr);
    void bark() {
        qInfo() << "bark!";
    }

signals:
};

#endif // CANINE_H
