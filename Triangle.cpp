#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

// two sides and the angle between them (angle in degrees)
Triangle::Triangle(double s1, double s2, double ang) {
    ang = fmod(abs(ang), 180); // an angle between two sides cannot exceed 180
    setArea(0.0);
    setPerimeter(0.0);
    sides[0] = s1;
    sides[1] = s2;
    angle = ang;

    // a^2 = b^2 + c^2 - 2bc*cos(A)
    sides[2] = sqrt(pow(s1, 2) +
        pow(s2, 2) - 2.0 * s1 * s2 *
        cos(angle*PI/180));
}

void Triangle::calculate() {
    setArea(0.5 * sides[0] * sides[1] * sin(angle*PI/180));
    for (int i = 0; i < S; ++i) {
        setPerimeter(getPerimeter() + sides[i]);
    }
}
