//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
using namespace std;

int main() {
    int x = 4;
    cout << "괄호가 있는 경우의 값 : " << (x + 3) * 5 << endl;
    cout << "괄호가 없는 경우의 값 : " << x + 3 * 5 << endl << endl;

    cout << "괄호가 있는 경우의 값 : " << 12 / (x + 2) << endl;
    cout << "괄호가 없는 경우의 값 : " << 12 / x + 2;

    return 0;
}