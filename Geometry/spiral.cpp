#include "spiral.h"

Spiral::Spiral(double r, double s)
{
    radius = r;
    step = s;
}

std::tuple<double, double, double> Spiral::getPoint(double t)
{
    return {radius * cos(t), radius * sin(t), t * step};
}

std::tuple<double, double, double> Spiral::getDerivative(double t)
{
    return {-radius * sin(t), radius * cos(t), step};
}

double Spiral::getter()
{
    return radius;
}

