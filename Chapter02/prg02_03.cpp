//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
using namespace std;

int main() {
    // local declaration
    int num1, num2, sum;

    // statement
    cout << "첫 번째 숫자 입력 : ";
    cin >> num1;
    cout << "두 번째 숫자 입력 : ";
    cin >> num2;

    sum = num1 + num2;
    cout << "두 숫자의 합 : " << sum;

    return 0;
}