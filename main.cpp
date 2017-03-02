#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle t1(3,4,90);

    t1.calculate();

    cout << "Area: " << t1.getArea() << endl;
    cout << "Perimeter: " << t1.getPerimeter() << endl;

    return 0;
}
