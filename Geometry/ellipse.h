#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "curve.h"


class Ellipse : public Curve
{
public:
    Ellipse(double r_x, double r_y);
    std::tuple<double, double, double> getPoint(double t) override ;
    std::tuple<double, double, double> getDerivative(double t) override;
    double getter();
private:
    double radius_x;
    double radius_y;
};

#endif // ELLIPSE_H
