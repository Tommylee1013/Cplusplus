//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "enter the number of rows : ";
    cin >> rows;

    cout << "enter the number of columns : ";
    cin >> cols;

    for (int i = 0; i <= rows; i ++) {
        for (int j = 0; j <= cols; j ++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}