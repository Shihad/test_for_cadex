#include "circle.h"

Circle::Circle(double r)
{
    radius=r;
}

std::tuple<double, double, double> Circle::getPoint(double t)
{
    return {radius*cos(t), radius*sin(t),0};
}

std::tuple<double, double, double> Circle::getDerivative(double t)
{
    return {-radius * sin(t), radius * cos(t), 0};
}

double Circle::getter()
{
    return radius;
}

