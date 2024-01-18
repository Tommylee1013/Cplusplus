//
// Created by Junghun Lee on 1/19/24.
//
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

// function declaration
void get_side_nums(int * side);
void get_side_length(double * side);
void calcul_area(double * area, const int * side_num, const double * side_length);

// global constant
const double PI = 3.14159265358979323846;

// main
int main() {
    int n;
    double s, area;

    get_side_nums(& n);
    get_side_length(& s);
    calcul_area(& area, & n, & s);

    printf("perimeter of the regular polygon = %.2f\n", n * s);
    printf("area of the regular polygon = %.2f\n", area);

    return 0;
} // main

// function definition
void get_side_nums(int * side) {
    do {
        cout << "enter the number of sides of the regular polygon : ";
        cin >> * side;
    } while (* side < 3);
} // get_side_nums

void get_side_length(double * side) {
    do {
        cout << "enter the length of the side of the regular polygon : ";
        cin >> * side;
    } while (* side <= 0);
} // get_side_length

void calcul_area(double * area, const int * side_num, const double * side_length) {
    * area = (* side_num * pow(* side_length, 2)) / (4 * tan(PI / * side_num));
} // calcul_area
