#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve.h"


class Circle : public Curve
{
public:
    Circle(double r);
    std::tuple<double, double, double> getPoint(double t) override;
    std::tuple<double, double, double> getDerivative(double t) override;
    double getter();
private:
   double radius;
};

#endif // CIRCLE_H
