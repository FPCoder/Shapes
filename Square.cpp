#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;

//Creates Square object with one side since all sides are equal
Square::Square(double s) {
	side = s;
	setArea(0.0);
	setPerimeter(0.0);
}
//calculates area and perimeter of square
void Square::calculate() {
	setArea(side * side);
	setPerimeter(side * S);
}
