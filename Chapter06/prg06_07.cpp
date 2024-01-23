//
// Created by Junghun Lee on 1/23/24.
//
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

int main() {
    // local declaration and initialization
    int low = 5, high = 15, tryLimit = 5, guess;

    // generate a random number
    srand(time(0));
    int temp = rand();
    int num = temp % (high - low + 1) + low;

    // iteration for guessing
    int counter = 1;
    bool flag = false;
    while (counter <= tryLimit && !flag) {
        do {
            printf("enter your guess between %d and %d : ", low, high);
            scanf("%d", & guess);
        } while (guess < low || guess > high);

        if (guess == num) {
            flag = true;
        } else if (guess < num) {
            printf("your guess is too low.\n");
        } else {
            printf("your guess is too high.\n");
        }
        counter ++;
    }

    if (flag) {
        cout << "congratulation. you guessed it right in " << counter - 1 << " tries." << endl;
        cout << "the number is " << num << "." << endl;
    } else {
        cout << "sorry. you have used up all your tries." << endl;
        cout << "the number is " << num << "." << endl;
    }
    return 0;
}