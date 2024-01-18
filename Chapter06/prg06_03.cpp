//
// Created by Junghun Lee on 1/19/24.
//
#include <iostream>
#include <cmath> // derived from C language
#include <cstdio>
using namespace std;

int main() {
    const double PI = 3.14159265358979323846;
    double degree = PI / 4;

    cout << "sin(45) = " << sin(degree) << endl;
    printf("cos(45) = %f\n", cos(degree));
    cout << "tan(45) = " << tan(degree) << endl;

    return 0;
}