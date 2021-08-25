/*
Lowai Dobie
CSCI-135
leap.cpp
Tong Yi
sks the user to input an integer representing a year number (1999, 2016, etc.).
If the input year is a leap year according to the modern Gregorian calendar. 
it should print Leap year, otherwise, print Common year.
2/2/2021
*/
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: "<<endl;
    cin>>year;
    if(year % 4 !=0 ){
        cout<<"common year";
    }
    else if(year % 100 !=0){
        cout<<"leap year";
    }
    else if(year % 400 !=0){
        cout<<"common year";
    }
    else{
        cout<<"leap year";
    }
    return 0;
}
