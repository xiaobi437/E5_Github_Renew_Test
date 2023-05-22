#include "Shape.h"

Round::Round(double radius)
{
    cout << "Round()" << endl;
    this->radius = radius;
}

double Round::area()
{
    return this->radius * this->radius * 3.14159;
}

Rectangle::Rectangle(double width, double high)
{
    cout << "Rectangle()" << endl;
    this->high = high;
    this->width = width;
}

double Rectangle::area()
{
    return this->high * this->width;
}

Triangle::Triangle(double width, double high)
{
    cout << "Triangle()" << endl;
    this->high = high;
    this->width = width;
}

double Triangle::area()
{
    return (this->high * this->width) / 2;
}

double get_area(Shape* sp)
{
    double shape_area;
    shape_area = sp->area();
    
    cout << "this area:" << shape_area << endl;

    return shape_area;
}

double Shape::area()
{
    return 0.0;
}
