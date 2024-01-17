//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "enter your score(0~100) : ";
    cin >> score;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "your grade is " << grade << endl;

    return 0;
}