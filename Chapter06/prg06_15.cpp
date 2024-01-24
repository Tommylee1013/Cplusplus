//
// Created by Junghun Lee on 1/24/24.
//
#include <iostream>
using namespace std;

void swap(int & first, int & second);

int main() {
    int first = 10;
    int second = 20;

    printf("first value of main() function = %d\n", first);
    printf("second value of main() function = %d\n", second);

    swap(first, second);

    printf("first value of main() function = %d\n", first);
    printf("second value of main() function = %d\n", second);

    return 0;
}

void swap(int & first, int & second) {
    int temp;

    temp = first;
    first = second;
    second = temp;
}