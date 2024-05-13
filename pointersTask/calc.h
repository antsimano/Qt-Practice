#ifndef CALC_H
#define CALC_H

#include <QObject>
#include <QDebug>

class Calc : public QObject
{
    Q_OBJECT
public:
    explicit Calc(QObject *parent = nullptr);
    ~Calc();

signals:
};

#endif // CALC_H
