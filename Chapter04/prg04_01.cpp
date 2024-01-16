//
// Created by Junghun Lee on 1/16/24.
//
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "enter the integer : ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    cout << "the absolute value you entered = " << number;

    return 0;
}