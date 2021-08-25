/*******************************************************************************
Lowai Dobie
CSCI-135
E7.16
perimeter.cpp
a program that reads the coordinates of
the points, calls your function, 
and displays the result.
Tong Yi
4/12/21
*******************************************************************************/
#include<iostream>
#include<cmath>
using namespace std;
struct Point
{
	int x, y;
};
struct Triangle
{
	Point p1, p2, p3;

double perimeter(Triangle t)
{
	double side1 = sqrt(pow(t.p2.x - t.p1.x, 2) + pow(t.p2.y - t.p1.y, 2));
	double side2 = sqrt(pow(t.p3.x - t.p2.x, 2) + pow(t.p3.y - t.p2.y, 2));
	double side3 = sqrt(pow(t.p1.x - t.p3.x, 2) + pow(t.p1.y - t.p3.y, 2));

	return side1 + side2 + side3;
}
int main()
{
	Triangle t;
	
	cout << "Enter point1 x:";
	cin >> t.p1.x;
	cout << "Enter point1 y:";
	cin >> t.p1.y;

	cout << "Enter point2 x:";
	cin >> t.p2.x;
	cout << "Enter point2 y:";
	cin >> t.p2.y;

	cout << "Enter point3 x:";
	cin >> t.p3.x;
	cout << "Enter point3 y:";
	cin >> t.p3.y;

	
	double p = perimeter(t);
	cout << "Perimeter is: " << p << endl;
	return 0;
}