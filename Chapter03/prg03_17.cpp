//
// Created by Junghun Lee on 1/15/24.
//
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    y += x *= 40;

    cout << "x : " << x << endl;
    cout << "y : " << y << endl;

    return 0;
}