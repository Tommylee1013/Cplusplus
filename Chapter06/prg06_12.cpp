//
// Created by Junghun Lee on 1/23/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

// function prototype(declaration)
int input();
bool process(int);
void output(int, bool);

int main() {
    int year;
    bool result;

    year = input();
    result = process(year);
    output(year, result);

    return 0;
}

int input() {
    int year;
    do {
        printf("enter the year after 1582 : ");
        cin >> year;
    } while (year <= 1582); // when year is less than 1582, repeat the loop
    return year;
}

bool process(int year) {
    bool criteria1 = (year % 4 == 0);
    bool criteria2 = (year % 100 != 0) || (year % 400 == 0);

    return criteria1 && criteria2;
}

void output(int year, bool result) {
    if (result) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}