//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;

    if (num1 >= num2) {
        if (num1 > num2) {
            cout << num1 << " > " << num2;
        } else {
            cout << num1 << " == " << num2;
        }
    } else {
        cout << num1 << " < " << num2;
    }
    return 0;
}