//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // local variable declaration
    int num, sum = 0;
    ifstream infile;

    // file open
    infile.open("numbers.dat");

    // while repetition statement
    while(infile >> num) {
        sum += num;
    }

    // display the result
    cout << "the sum is " << sum;
    infile.close();

    return 0;
}