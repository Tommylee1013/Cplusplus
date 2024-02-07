//
// Created by Junghun Lee on 2/8/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

class Circle {
    private :
        double radius;
    public :
        Circle(double radius);
        Circle();
        ~Circle();
        Circle(const Circle & circle);
        void setRadius(double radius);
        double getRadius() const;
        double getArea() const;
        double getPerimeter() const;
};

Circle::Circle(double rds) : radius(rds) {
    printf("매개변수가 있는 생성자가 호출되었습니다\n");
}

Circle::Circle() : radius(0.0) {
    printf("기본 생성자가 호출되었습니다\n");
}

Circle::Circle(const Circle& circle) : radius(circle.radius) {
    printf("복사 생성자가 호출되었습니다\n");
}

Circle::~Circle() {
    printf("소멸자가 호출되었습니다 : %f\n", radius);
}

void Circle::setRadius(double value) {
    radius = value;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14159265358979323846;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const {
    const double PI = 3.14159265358979323846;
    return (2 * PI * radius);
}

int main() {
    Circle circle1(5.2);
    printf("radius = %f\n", circle1.getRadius());
    printf("area = %f\n", circle1.getArea());
    printf("perimeter = %f\n\n", circle1.getPerimeter());

    Circle circle2(circle1);
    printf("radius = %f\n", circle2.getRadius());
    printf("area = %f\n", circle2.getArea());
    printf("perimeter = %f\n\n", circle2.getPerimeter());

    Circle circle3;
    printf("radius = %f\n", circle3.getRadius());
    printf("area = %f\n", circle3.getArea());
    printf("perimeter = %f\n\n", circle3.getPerimeter());

    return 0;
}