//
// Created by Junghun Lee on 1/24/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

int getScore();
char findGrade(int);
void printResult(int, char);

int main() {
    int score;
    char grade;

    score = getScore();
    grade = findGrade(score);
    printResult(score, grade);

    return 0;
}

int getScore() {
    int score;

    do {
        cout << "Enter your score (0 ~ 100) : ";
        cin >> score;
    } while (score < 0 || score > 100); // when score is less than 0 or greater than 100, repeat the loop
    return score;
}

char findGrade(int score) {
    char grade;

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
    }
    return grade;
}

void printResult(int score, char grade) {
    printf("Result of your test\n");
    cout << "Your score is " << score << " and your grade is " << grade << endl;
}