//
// Created by Junghun Lee on 1/16/24.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 1237234.1235;
    cout << fixed << setprecision(2) << showpos << setfill('*');

    cout << setw(15) << left << x << endl;
    cout << setw(15) << internal << x << endl;
    cout << setw(15) << right << x << endl;

    return 0;
}