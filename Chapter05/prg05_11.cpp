//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startDay, daysInMonth, col = 1;

    do {
        cout << "enter the number of months day(28, 29, 30, 31) : ";
        cin >> daysInMonth;
    } while (daysInMonth < 28 || daysInMonth > 31);

    do {
        cout << "enter the starting day(0 = Sun, 1 = Mon, 2 = Tue, 3 = Wed, 4 = Thu, 5 = Fri, 6 = Sat) : ";
        cin >> startDay;
    } while (startDay < 0 || startDay > 6);

    cout << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
    cout << "--- --- --- --- --- --- ---" << endl;

    for (int space = 0; space < startDay; space ++) {
        cout << "    ";
        col ++;
    }

    for (int day = 1; day<= daysInMonth; day ++) {
        cout << setw(3) << day << " ";
        col ++;
        if (col > 7) {
            cout << endl;
            col = 1;
        }
    }

    return 0;
}