//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141592;

    double radius;
    double perimeter;
    double area;

    cout << "Enter the radius of circle : ";
    cin >> radius;

    perimeter = 2 * PI * radius;
    area = PI * PI * radius;

    cout << "radius : " << radius << endl;
    cout << "perimeter : " << perimeter << endl;
    cout << "area : " << area << endl;

    return 0;
}