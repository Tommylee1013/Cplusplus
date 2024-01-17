//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    static int sum1, sum2, sum3;
    int n;

    // enter the value n
    cout << "enter the n : ";
    cin >> n;

    int count = 1;
    while (count <= n) {
        sum1 += count;
        sum2 += count * count;
        sum3 += count * count * count;
        count++;
    }

    // display the result
    cout << "the value of n = " << n << endl;
    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
    cout << "sum3 = " << sum3 << endl;

    return 0;
}