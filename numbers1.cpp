/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 5
numbers.cpp
Write a program that defines a function
If n is divisible by d, the function should return true, 
otherwise return false.
3/7/21
Tong Yi
*******************************************************************************/
#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d); //defining function
int main() {
    int n, d;
    cout<<"Please enter the first number: ";
    cin>>n;
    cout<<"Please enter the second number: ";
    cin>>d;
    if(isDivisibleBy(n,d)==true){   //taking input from function
        cout<<"Yes";                //prints yes if true
    }
    else{
        cout<<"No";                 //prints no if false
    }
    return 0;
}
bool isDivisibleBy(int n, int d){
    if (d == 0) {
        return false;
    }
    int rem= n%d;               //creating variable for remainder 
    if(rem==0){
        return true;            //cheking to see if remainder is equal to zero, if yes then it returns true
    }
    else{
        return false;           //otherwise, returns false
    }
}