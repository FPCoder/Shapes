#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;

Square::Square(double s) {
	side = s;
	setArea(0.0);
	setPerimeter(0.0);
}

void Square::calculate() {
	setArea(side * side);
	setPerimeter(side * S);
}