//
// Created by Junghun Lee on 1/23/24.
//
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    long elapsedSeconds = time(0);
    int currentSecond = elapsedSeconds % 60;

    long elapsedMinutes = elapsedSeconds / 60;
    int currentMinute = elapsedMinutes % 60;

    long elapsedHours = elapsedMinutes / 60;
    int currentHour = elapsedHours % 24;

    cout << "current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;

    return 0;
}