//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    int year;
    bool div4, div100, div400;
    bool leap_year;

    cout << "enter the year : ";
    cin >> year;

    div4 = (year % 4 == 0);
    div100 = (year % 100 == 0);
    div400 = (year % 400 == 0);

    if (div400 || (div4 && !div100)) {
        leap_year = true;
    } else {
        leap_year = false;
    }

    if (leap_year) {
            cout << year << " is a leap year.";
        } else {
            cout << year << " is not a leap year.";
        }
    return 0;
}

