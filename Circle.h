#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
	static const int S = 1; // number of sides
	Circle();
	Circle(double); // side
	void calculate();
private:
	double side;
};
#endif