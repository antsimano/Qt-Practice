#ifndef HUNGRYCAT_H
#define HUNGRYCAT_H

#include <QObject>
#include <QDebug>

class HungryCat : public QObject
{
    Q_OBJECT
public:
    explicit HungryCat(QObject *parent = nullptr);

    void meow();

signals:
};

#endif // HUNGRYCAT_H
