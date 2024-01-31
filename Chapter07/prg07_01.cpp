//
// Created by Junghun Lee on 2/1/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

class Circle {
    private :
        double radius;
    public :
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
        void setRadius(double);
};

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return 3.14159 * radius * radius;
}

double Circle::getPerimeter() const {
    return 2 * 3.14159 * radius;
}

void Circle::setRadius(double value) {
    radius = value;
}

int main() {
    printf("Circle 1 :\n");
    Circle circle1;
    circle1.setRadius(10.0);
    printf(
            "radius = %f\narea = %f\nperimeter = %f\n",
            circle1.getRadius(), circle1.getArea(), circle1.getPerimeter()
    );

    printf("\nCircle 2 :\n");
    Circle circle2;
    circle2.setRadius(20.0);
    printf(
            "radius = %f\narea = %f\nperimeter = %f\n",
            circle2.getRadius(), circle2.getArea(), circle2.getPerimeter()
    );

    return 0;
}