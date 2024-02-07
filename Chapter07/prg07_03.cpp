//
// Created by Junghun Lee on 2/8/24.
//
#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

class RandomInteger {
    private :
        int low;
        int high;
        int value;
    public :
        RandomInteger(int lw, int hh);
        ~RandomInteger();
        RandomInteger(const RandomInteger & random) = delete;
        void print() const;
};

RandomInteger::RandomInteger(int lw, int hh) : low(lw), high(hh) {
    srand(time(0));
    int temp = rand();
    value = low + (temp % (high - low + 1));
}

RandomInteger::~RandomInteger() {}

void RandomInteger::print() const {
    printf("low = %d, high = %d, value = %d\n", low, high, value);
}

int main() {
    RandomInteger r1(100, 200);
    printf("100~200 사이의 난수 : ");
    r1.print();

    RandomInteger r2(400, 600);
    printf("400~600 사이의 난수 : ");
    r2.print();

    RandomInteger r3(1500, 2000);
    printf("1500~2000 사이의 난수 : ");
    r3.print();

    return 0;
}
