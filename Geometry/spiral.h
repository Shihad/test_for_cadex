#ifndef SPIRAL_H
#define SPIRAL_H
#include "curve.h"

class Spiral : public Curve
{
public:
    Spiral(double r, double s);
    std::tuple<double, double, double> getPoint(double t) override;
    std::tuple<double, double, double> getDerivative(double t) override;
    double getter();
private:
 double radius;
 double step;
};

#endif // SPIRAL_H
