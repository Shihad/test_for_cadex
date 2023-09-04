#ifndef CURVE_H
#define CURVE_H
#include <vector>
#include <cmath>
#include <iostream>
#include <list>
#include <tuple>

class Curve
{
public:
    Curve();
    virtual std::tuple<double, double, double> getPoint(double t) = 0;
    virtual std::tuple<double, double, double> getDerivative(double t) = 0;
    virtual double getter() = 0;
};

#endif // CURVE_H
