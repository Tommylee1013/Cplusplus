//
// Created by Junghun Lee on 1/24/24.
//
#include <iostream>
#include <cstdio>
using namespace std;

int max(int, int);
int max(int, int, int);
int max(int, int, int, int);

int main() {
    printf("maximum(5, 7) = %d\n", max(5, 7));
    printf("maximum(7, 9, 8) = %d\n", max(7, 9, 8));
    printf("maximum(14, 3, 12, 11) = %d\n", max(14, 3, 12, 11));

    return 0;
}

int max(int num1, int num2) {
    int larger;
    if (num1 >= num2) {
        larger = num1;
    } else {
        larger = num2;
    }
    return larger;
}

int max(int num1, int num2, int num3) {
    return max(max(num1, num2), num3);
}

int max(int num1, int num2, int num3, int num4) {
    return max(max(num1, num2, num3), num4);
}