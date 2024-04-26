#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "pair.h"

class Ellipse : public Pair {
public:
    Ellipse(double f = 0.0, double s = 0.0);
    double area() const;
    double perimeter() const;
    virtual void print() const override;
};

#endif