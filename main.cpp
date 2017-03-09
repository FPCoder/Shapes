#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
using namespace std;

int main() {
    Triangle t1(3,4,90);
    Triangle t2(5,6,60);
    t1.calculate();
    t2.calculate();
    
    Square s1(4);
    Square s2(6);
    s1.calculate();
    s2.calculate();
    
    Circle c1(4);
    Circle c2(7);
    c1.calculate();
    c2.calculate();
    
    cout << "Triangle 1:" << endl;
    cout << "Area: " << t1.getArea() << endl;
    cout << "Perimeter: " << t1.getPerimeter() << endl;
    
    cout << "Triangle 2:" << endl;
    cout << "Area: " << t2.getArea() << endl;
    cout << "Perimeter: " << t2.getPerimeter() << endl;
    
    cout << "Square 1:" << endl;
    cout << "Area: " << s1.getArea() << endl;
    cout << "Perimeter: " << s1.getPerimeter() << endl;
    
    cout << "Square 2:" << endl;
    cout << "Area: " << s2.getArea() << endl;
    cout << "Perimeter: " << s2.getPerimeter() << endl;
    
    cout << "Circle 1:" << endl;
    cout << "Area: " << c1.getArea() << endl;
    cout << "Perimeter: " << c1.getPerimeter() << endl;
    
    cout << "Circle 2:" << endl;
    cout << "Area: " << c2.getArea() << endl;
    cout << "Perimeter: " << c2.getPerimeter() << endl;


    return 0;
}
