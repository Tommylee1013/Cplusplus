//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int lower = 1, higher = 300, divisor = 7, col = 1;

    for (int i = lower; i < higher; i ++) {
        if (i % divisor == 0) {
            cout << setw(4) << i; // %.4d와 같은 의미이다
            col ++;
            if (col > 10) {
                cout << endl;
                col = 1;
            }
        }
    }

    return 0;
}