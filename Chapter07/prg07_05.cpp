//
// Created by Junghun Lee on 3/7/24.
//
#include <iostream>
using namespace std;

// class declaration

class Rectangle {
private :
    double length;
    double height;
    static int count;
public :
    Rectangle(double length, double height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle & rect);
    static int getCount();
};

// members

int Rectangle::count = 0; // initialization

Rectangle::Rectangle(double length, double height) : length(length), height(height) {
    count ++;
}

Rectangle::Rectangle() : length(0.0), height(0.0) {
    count ++;
}

Rectangle::Rectangle(const Rectangle &rect) : length(rect.length), height(rect.height) {
    count ++;
}

Rectangle::~Rectangle() {
    count --;
}

int Rectangle::getCount() {
    return count;
}

// main

int main() {
    {
        Rectangle rect1(3.2, 1.2);
        Rectangle rect2(1.5, 2.1);
        Rectangle rect3;
        Rectangle rect4(rect1); // copy
        Rectangle rect5(rect2); // copy
        cout << "number of objects : " << rect5.getCount() << endl;
    }
    cout << "number of objects : " << Rectangle::getCount() << endl;
    return 0;
}