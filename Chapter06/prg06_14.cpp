//
// Created by Junghun Lee on 1/24/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

void fun(int &);

int main() {
    int x = 10;
    fun(x);
    printf("x in main() function = %d\n", x);
    return 0;
}

void fun(int &x) {
    x++;
    printf("x in fun() function = %d\n", x);
}