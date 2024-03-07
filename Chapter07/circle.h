//
// Created by Junghun Lee on 3/7/24.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cstdio>
#include <cassert>
using namespace std;

class Circle {
private :
    double radius;
public :
    Circle(double radius);
    Circle();
    Circle(const Circle & circle);
    ~Circle();
    void setRadius(double radius);
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
};

#endif
