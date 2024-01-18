//
// Created by Junghun Lee on 1/19/24.
//
#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "enter the positive integer : ";
        cin >> num;
    } while (num <= 0);

    if (num == 1) {
        cout << "1 is neither prime nor composite." << endl;
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            cout << i << " is a factor of " << num << "." << endl;
            return 0;
        }
    }

    cout << num << " is a prime number." << endl;
    return 0;
}