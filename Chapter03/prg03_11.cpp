//
// Created by Junghun Lee on 1/15/24.
//
#include <iostream>
using namespace std;

int main() {
    double x = 23.56;
    int y = 30;

    cout << "without casting : " << x + y << endl;
    cout << "with casting : " << static_cast<int>(x) + y << endl;
    return 0;
}