//
// Created by Junghun Lee on 1/15/24.
//
#include <iostream>
using namespace std;

int main() {
    int x = 1237;

    cout << "x의 10진수 값 : " << x << endl;
    cout << "x의 8진수 값 : " << oct << x << endl;
    cout << "x의 16진수 값 : " << hex << x << endl;
    cout << "x의 10진수 값 : " << dec << x << endl;
    // showbase를 사용한 상태로 x를 각각의 진법으로 출력
    cout << "x의 10진수 값 : " << showbase << dec << x << endl;
    cout << "x의 8진수 값 : " << showbase << oct << x << endl;
    cout << "x의 16진수 값 : " << showbase << hex << x << endl;

    return 0;
}