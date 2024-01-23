//
// Created by Junghun Lee on 1/23/24.
//
#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
    // local declaration
    char ch;
    int count = 0;

    while(cin >> noskipws >> ch) { // 여기서 noskipws는 cin의 멤버 함수이다
        if (isalpha(ch)) {
            count++;
        }
        ch = toupper(ch);
        cout << ch;
    }

    cout << "\nthe number of alphabetic characters = " << count << endl;
    return 0;
}