//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "enter the integer between 0 and 6 : ";
    cin >> day;

    switch (day) {
        case 0 :
            cout << "sunday" << endl;
            break;
        case 1 :
            cout << "monday" << endl;
            break;
        case 2 :
            cout << "tuesday" << endl;
            break;
        case 3 :
            cout << "wednesday" << endl;
            break;
        case 4 :
            cout << "thursday" << endl;
            break;
        case 5 :
            cout << "friday" << endl;
            break;
        case 6 :
            cout << "saturday" << endl;
            break;
        default :
            cout << "invalid input" << endl;
            break; // this line will be executed if the input is not between 0 and 6
    }
    return 0;
}