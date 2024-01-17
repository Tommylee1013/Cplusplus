//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    // local variables
    int num1, num2;
    int larger;

    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;

    larger = num1 >= num2 ? num1 : num2;

    cout << "the larger number is " << larger;
    return 0;
}