/*
Lowai Dobie
CSCI-135
Positive or Zero or Negative
Write a program that reads an integer 
and prints whether it is negative, zero, or
positive.
3/4/21

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Please enter a integer: ";
    cin>>x;
    if (x<0){
        cout<<"Negative";
    }
    else if (x>0){
        cout<<"Positive";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}
