#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

// two sides and the angle between them (angle in degrees)
Circle::Circle(double s) {
	side = s;
	setArea(0.0);
	setPerimeter(0.0);
}

void Circle : calculate() {
	setArea(side * side *PI);
	setPerimeter(side * 2 *PI);
	
}
