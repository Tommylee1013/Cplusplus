//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    do {
        cout << "enter the score between 0 and 100 : ";
        cin >> score;
    } while (score < 0 || score > 100);

    switch (score / 10) {
        case 10 :
        case 9 :
            grade = 'A';
            break;
        case 8 :
            grade = 'B';
            break;
        case 7 :
            grade = 'C';
            break;
        case 6 :
            grade = 'D';
            break;
        default :
            grade = 'F';
            break;
    }

    cout << "the grade is " << grade << endl;
    return 0;
}