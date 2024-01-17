//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    int temperature;
    bool hot, cold;

    // enter the temperature
    cout << "enter the current temperature : ";
    cin >> temperature;

    // set condition
    hot = temperature > 23;
    cold = temperature < 15;

    // decision making
    if (hot || cold) {
        cout << "turn on the air conditioner." << endl;
        if (hot) {
            cout << "operates in cooling mode." << endl;
        } else {
            cout << "operates in heating mode." << endl;
        }
    } else {
        cout << "turn off the air conditioner." << endl;
    }
    return 0;
}