//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
using namespace std;

int main() {
    int x = 20, y = 30, z = 40, t = 50, u = 60;

    x += 5;
    y -= 3;
    z *= 10;
    t /= 8;
    u %= 7;

    cout << "value of x : " << x << endl;
    cout << "value of y : " << y << endl;
    cout << "value of z : " << z << endl;
    cout << "value of t : " << t << endl;
    cout << "value of u : " << u << endl;

    return 0;
}