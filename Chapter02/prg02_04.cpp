//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
using namespace std;

int main() {
    // constant variable declaration
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dollarValue = 100;

    // local variable declaration
    unsigned int pennies;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;
    unsigned long totalValues;

    //statement
    cout << "number of pennies : ";
    cin >> pennies;
    cout << "number of nickels : ";
    cin >> nickels;
    cout << "number of dimes : ";
    cin >> dimes;
    cout << "number of quarters : ";
    cin >> quarters;
    cout << "number of dollars : ";
    cin >> dollars;

    totalValues =
            pennies * pennyValue +
            nickels * nickelValue +
            dimes * dimeValue +
            quarters * quarterValue +
            dollars * dollarValue;

    cout << "The total value is " << totalValues << "penny.";
    return 0;
}