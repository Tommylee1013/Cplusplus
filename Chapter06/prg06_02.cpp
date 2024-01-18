//
// Created by Junghun Lee on 1/19/24.
//
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    double term;

    printf("enter the coefficient a of quadratic equation : ");
    scanf("%d", & a);

    printf("enter the coefficient b of quadratic equation : ");
    scanf("%d", & b);

    cout << "enter the coefficient c of quadratic equation : ";
    cin >> c;

    // calculate the discriminant
    term = b * b - 4 * a * c;

    if (term < 0) {
        printf("the equation has no real roots.\n");
        exit(1);
    } else if (term == 0) {
        printf("the equation has one real root.\n");
        printf("the root is %.1f.\n", -b / (2.0 * a));
    } else {
        printf("the equation has two real roots.\n");
        cout << "x1 = " << (-b + sqrt(term)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(term)) / (2 * a) << endl;
    }

    return 0;
}