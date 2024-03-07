//
// Created by Junghun Lee on 3/7/24.
//
#include "circle.h"

int main() {
    Circle circle1(5.2);
    cout << "반지름 : " << circle1.getRadius() << endl;
    cout << "넓이 : " << circle1.getArea() << endl;
    cout << "둘레 : " << circle1.getPerimeter() << endl;
    printf("\n");

    Circle circle2(circle1);
    printf("반지름 : %f\n", circle2.getRadius());
    printf("넓이 : %f\n", circle2.getArea());
    printf("둘레 : %f\n\n", circle2.getPerimeter());

    Circle circle3;
    printf("반지름 : %f\n", circle3.getRadius());
    printf("넓이 : %f\n", circle3.getArea());
    printf("둘레 : %f\n\n", circle3.getPerimeter());

    return 0;
}