//
// Created by Junghun Lee on 1/18/24.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // declaration
    ifstream infile;
    int num;
    bool flag;

    // file open
    infile.open("numbers.dat");

    flag = false;
    while (infile >> num && !flag) {
        if (num >= 150) {
            cout << "the number that we want to find is " << num << endl;
            flag = true;
        }
    }

    if (!flag) {
        cout << "the number that we want to find is not in the file" << endl;
    }

    infile.close();
    return 0;
}