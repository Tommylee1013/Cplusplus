//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, initial, last;
    string space = " ", dot = ".";
    string fullName;

    cout << "Enter the first name : ";
    cin >> first;

    cout << "Enter the initial name : ";
    cin >> initial;

    cout << "Enter the lase name : ";
    cin >> last;

    fullName = first + space + initial + dot + space + last;
    cout << "The full name is " << fullName << endl;

    return 0;
}