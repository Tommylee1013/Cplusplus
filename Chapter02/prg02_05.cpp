//
// Created by Junghun Lee on 1/14/24.
//
#include <iostream>
using namespace std;

int main() {
    int balance = 0;
    int transaction;

    cout << "Enter the first transaction values : ";
    cin >> transaction;
    balance += transaction;

    cout << "Enter the second transaction values : ";
    cin >> transaction;
    balance += transaction;

    cout << "Enter the third transaction values : ";
    cin >> transaction;
    balance += transaction;

    cout << "The final balances of your account is " << balance << "dollars.";
    return 0;
}