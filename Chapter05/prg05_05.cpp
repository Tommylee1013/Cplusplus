//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;

    cout << "enter the integer (input ends if it is -1) : ";
    cin >> num;
    while (num != -1) { // -1 is sentinel
        sum += num;
        cout << "enter the integer (input ends if it is -1) : ";
        cin >> num;
    }
    cout << "the sum is " << sum;
    return 0;
}