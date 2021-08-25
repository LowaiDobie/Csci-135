/*******************************************************************************
Lowai Dobie
CSCI-135
E7.16
Point.cpp
a program
that reads the coordinates of the points, 
calls your function, and displays the result
Tong Yi
4/12/21
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    return sqrt(pow((a.x-b.x), 2) + pow((a.y-b.y), 2));
}

int main() {
    Point p1, p2;
    cout << "Enter point 1: ";
    cin >> p1.x >> p1.y;
    cout << "Enter of point 2: ";
    cin >> p2.x >> p2.y;
    cout << "Distance is " << distance(p1, p2) << endl;
    return 0;
}
