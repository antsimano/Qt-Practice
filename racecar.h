#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>

class RaceCar : public QObject
{
    Q_OBJECT
public:
    explicit RaceCar(QObject *parent = nullptr);

signals:
};

#endif // RACECAR_H
