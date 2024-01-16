//
// Created by Junghun Lee on 1/16/24.
//
#include <iostream>
using namespace std;

int main() {
    int num1, num2, larger;

    cout << "enter the first number : ";
    cin >> num1;

    cout << "enter the second number : ";
    cin >> num2;

    if (num1 >= num2) {
        larger = num1;
    } else {
        larger = num2;
    }
    cout << "the larger number = " << larger;
    return 0;
}