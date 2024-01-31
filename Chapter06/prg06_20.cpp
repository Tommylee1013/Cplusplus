//
// Created by Junghun Lee on 2/1/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int sum = 5;
    printf("sum = %d\n", sum);

    {
        int sum = 7;
        printf("sum = %d\n", sum);
    }

    printf("sum = %d\n", sum);
    return 0;
}