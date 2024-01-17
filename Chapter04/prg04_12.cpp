//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
using namespace std;

int main() {
    // local variable declaration
    int score;
    char grade;

    cout << "enter your score between 0 to 100 : ";
    cin >> score;

    if (score > 100 || score < 0) {
        cout << "invalid score" << endl;
        exit(1);
    }

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    } // switch statement

    // print
    cout << "your score is " << score << endl;
    cout << "your grade is " << grade << endl;

    return 0;
}