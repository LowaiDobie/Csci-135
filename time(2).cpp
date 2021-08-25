/*******************************************************************************
Lowai Dobie
CSCI-135
Task B
time.cpp
The function should create 
and return a new moment of time that is min minutes after time0.
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

Time addMinutes(Time time0, int min);


int minutesSinceMidnight(Time time){
    int num_of_mins = time.h*60+time.m;
    return num_of_mins;
}

int minutesUntil(Time earlier, Time later){
    int num_of_mins = (later.h-earlier.h) *60 + (later.m - earlier.m);
    return num_of_mins;
}

Time addMinutes(Time time0, int min){
    Time new_time;
    new_time.h= (min+time0.m)/60+ time0.h;
    new_time.m= (min+time0.m)%60;
    return new_time;
}

int main()
{
    Time t1, t2;
    int extraMin;
    
    cout<< "Enter time 1: "; 
    cin >> t1.h >> t1.m;
    cout<< "Enter mins to add: "; 
    cin >> extraMin;
    t2 = addMinutes(t1, extraMin);
    cout <<t2.h<<":"<<t2.m<<endl;

}