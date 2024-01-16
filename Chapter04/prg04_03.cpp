//
// Created by Junghun Lee on 1/16/24.
//
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "0 ~ 100점 사이의 점수를 입력하세요 : ";
    cin >> score;

    if (score >= 70) {
        cout << "you are pass." << endl;
    } else {
        cout << "you are fail." << endl;
    }

    return 0;
}