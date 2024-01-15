//
// Created by Junghun Lee on 1/15/24.
//
#include <iostream>
using namespace std;

int main() {
    double x = 1237;
    double y = 12376745.5623;

    cout << "x의 고정 소수점 형식 : " << x << endl;
    cout << "y의 고정 소수점 형식 : " << showpoint << y << endl;
    // scientific 조정자 사용
    cout << "y의 과학 표기법 형식 : " << y << scientific << endl;

    return 0;
}