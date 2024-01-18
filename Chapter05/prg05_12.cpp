//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
using namespace std;

int main() {
    int num;
    short leftDigit;

    cout << "enter the integer that is not negative : ";
    cin >> num;

    do {
        leftDigit = num % 10;
        num /= 10;
    } while(num > 0);

    cout << "the leftmost digit is " << leftDigit << endl;
    return 0;
}