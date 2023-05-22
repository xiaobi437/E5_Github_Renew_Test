#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cstring>

using namespace std;

class Shape
{
public:
	virtual double area();
protected:
};

class Round :public Shape
{
public:
	Round(double radius);
	double area();
protected:
	double radius;
};

class Rectangle :public Shape
{
public:
	Rectangle(double width, double high);
	double area();
protected:
	double width;
	double high;
};

class Triangle :public Shape
{
public:
	Triangle(double width, double high);
	double area();
protected:
	double width;
	double high;
};

double get_area(Shape *sp);

#endif	// !SHAPE_H


