#include "ellipse.h"

Ellipse::Ellipse(double r_x, double r_y)
{
    radius_x = r_x;
    radius_y = r_y;
}

std::tuple<double, double, double> Ellipse::getPoint(double t)
{
    return {radius_x * cos(t), radius_y * sin(t), 0};
}

std::tuple<double, double, double> Ellipse::getDerivative(double t)
{
    return {-radius_x * sin(t), radius_y * cos(t), 0};
}

double Ellipse::getter()
{
    return (radius_x+radius_y)/2;
}
