#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void calculate() = 0;
    double getArea() const { return area; }
    double getPerimeter() const { return perimeter; }
    void setArea(double a) { area = a; }
    void setPerimeter(double p) { perimeter = p; }
private:
    double area, perimeter;
};

#endif // !SHAPE_H
