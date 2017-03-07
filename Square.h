#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
	static const int S = 4; // number of sides
	Square();
	Square(double); // side
	void calculate();
private:
	double side;