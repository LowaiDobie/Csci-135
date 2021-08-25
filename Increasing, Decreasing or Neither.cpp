/*
Lowai Dobie
CSCI-135
Increasing, Decreasing or Neither
5 Write a program that reads three numbers and prints “increasing” if they are in
increasing order, “decreasing” if they are in decreasing order, and “neither” 
otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its
predecessor. The sequence 3 4 4 would not be considered increasing.
3/4/21

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout<<"Please enter a integer: ";
    cin>>x;
    cout<<"Please enter a integer: ";
    cin>>y;
    cout<<"Please enter a integer: ";
    cin>>z;
    if (x<y && y<z){
        cout<<"Increasing";
    }
    else if (x>y && y>z){
        cout<<"Decreasing";
    }
    else{
        cout<<"Neither";
    }
    return 0;
}
