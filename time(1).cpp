/*******************************************************************************
Lowai Dobie
CSCI-135
Task A
time.cpp
The first function should return the number of
minutes from 0:00AM until time.
The second function should receive two Time arguments
earlier and later and report how many minutes separate the two moments
Tong Yi
4/12/21
*******************************************************************************/
#include <iostream>
using namespace std;

struct Time {
    int h;
    int m;
};

int minutesSinceMidnight(Time time);

int minutesUntil(Time earlier, Time later);

int minutesSinceMidnight(Time time) {
    int num_of_mins = time.h * 60 + time.m;
    return num_of_mins;
}

int minutesUntil(Time earlier, Time later) {
    int num_of_mins = (later.h - earlier.h) * 60 + (later.m - earlier.m);
    return num_of_mins;
}

int main()
{
    Time t1, t2;

    cout << "Enter time 1: ";
    cin >> t1.h >> t1.m;
    cout << "Enter time 2: ";
    cin >> t2.h >> t2.m;
    cout << "These moments are " << minutesSinceMidnight(t1) << " and " << minutesSinceMidnight(t2);

    cout << " minutes after mid night" << endl;

    cout << "The interval between them is " << minutesUntil(t1, t2) << " minutes.";

}