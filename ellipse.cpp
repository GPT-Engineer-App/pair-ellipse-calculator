#include "ellipse.h"
#include <iostream>
#include <cmath>
using namespace std;

Ellipse::Ellipse(double f, double s) : Pair(f, s) {}

double Ellipse::area() const {
    return M_PI * first * second;
}

double Ellipse::perimeter() const {
    double h = pow((first - second), 2) / pow((first + second), 2);
    return M_PI * (first + second) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));
}

void Ellipse::print() const {
    cout << "Ellipse with semi-major axis " << first << " and semi-minor axis " << second;
    cout << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
}