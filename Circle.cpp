#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

//Creates Circle Object using radius as the side
Circle::Circle(double s) {
	side = s;
	setArea(0.0);
	setPerimeter(0.0);
}
//Calculates area and perimeter using equation PI * r^2
void Circle :: calculate() {
	setArea(side * side *PI);
	setPerimeter(side * 2 *PI);
	
}
