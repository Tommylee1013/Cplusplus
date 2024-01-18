//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    int sum = 0;
    int num;

    cout << "enter the first integer(enter EOF to exit) : ";
    while(cin >> num) {
        sum += num;
        cout << "enter the next integer(enter EOF to exit) : ";
    }

    // display the result
    cout << "the sum is " << sum;
    return 0;
}