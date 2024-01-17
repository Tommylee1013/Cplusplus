//
// Created by Junghun Lee on 1/17/24.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // local variable declaration
    int score;
    static int sum;
    double average;

    int counter = 0;
    while (counter < 4) {
        cout << "enter the score between 0 and 100 : ";
        cin >> score;
        sum += score;
        counter++;
    }

    average = static_cast <double>(sum) / 4;
    cout << fixed << setprecision(2) << showpoint;
    cout << "평균 점수 = " << average << endl;

    return 0;
}