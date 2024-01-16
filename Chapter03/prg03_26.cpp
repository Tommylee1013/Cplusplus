//
// Created by Junghun Lee on 1/16/24.
//
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "첫 번째 숫자를 10진수로 입력 : ";
    cin >> num1;

    cout << "두 번째 숫자를 8진수로 입력 : ";
    cin >> oct >> num2;

    cout << "세 번째 숫자를 16진수로 입력 : ";
    cin >> hex >> num2;

    cout << num1 << "   " << num2 << "   " << num3 << endl;
    return 0;
}