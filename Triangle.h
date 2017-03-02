#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

/* image for triangle
  A = angle, s1 = first arg, s2 = second arg
    *
    * *
  s2*   *    s3
    *     *
    *       *
    * A       *
    ************
         s1
*/

class Triangle : public Shape {
public:
    static const int S = 3; // number of sides
    Triangle();
    Triangle(double,double,double); // side 1, side 2, angle
    void calculate();
private:
    double sides[S];
    double angle; // angle between sides 0 and 1
};

#endif // !TRIANGLE_H
