/*
Lowai Dobie
CSCI-135
valid.cpp
Tong Yi
asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter 
until a valid number is input.
After a valid value is obtained, 
print this number n squared.
2/8/2021
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter an integer: ";
    cin>>n;
    while (n<=0 || n>=100){           // checks within the range of 0<n<100
        cout<<"Please re-enter: ";
        cin>>n;
    }
    n=n*n;                           // squares n by multiplying by itself
    cout<<"Number squared is "<<n;

    return 0;
}
