/*******************************************************************************
Lowai Dobie
CSCI-135
perimeter.cpp
a program that reads the coordinates of
the points, calls your function,
and displays the result.
Tong Yi
4/12/21
*******************************************************************************/
#include<iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Triangle {
    Point point1;
    Point point2;
    Point point3;
};

double distance(Point x, Point y) {
    return sqrt(pow(x.x - y.x, 2) + pow(x.y - y.y, 2));
}

double perimeter(Triangle triangle) {
    return distance(triangle.point1, triangle.point2) + distance(triangle.point2, triangle.point3) +
        distance(triangle.point1, triangle.point3);
}

int main() {
    Point p1, p2, p3;
    cout << "Enter x of first point: ";
    cin >> p1.x >> p1.y;
    cout << "Enter x of second point: ";
    cin >> p2.x >> p2.y;
    cout << "Enter x of third point: ";
    cin >> p3.x >> p3.y;

    Triangle t;
    t.point1 = p1;
    t.point2 = p2;
    t.point3 = p3;

    cout << "Perimeter is " << perimeter(t) << endl;
    return 0;
}
