//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    int age;
    bool eligible;

    cout << "enter your age : ";
    cin >> age;

    // set condition
    eligible = (age >= 25 ) && (age <= 100);

    // print result based on eligible condition
    if (eligible) {
        cout << "you are eligible to rent a car." << endl;
    } else {
        cout << "you are not eligible to rent a car." << endl;
    }

    return 0;
}