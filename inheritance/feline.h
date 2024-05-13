#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>
#include "mamal.h"

class Feline : public Mamal
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);
    void meow() {
        qInfo() << "meow!";
    }

signals:
};

#endif // FELINE_H
