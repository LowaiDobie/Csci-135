/*
Lowai Dobie
CSCI-135
Project 1 C, calc2
a simple calculator that can add and subtract integers,
and will accept arbitrarily long mathematical formulas composed of symbols 
+, -, and non-negative integer numbers.
use the semicolon symbol that must be used 
at the end of each expression in the input.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    char sign;
    int num, sum;
    cin>> sum;  
    while(cin>>sign>>num){
        if (sign == '+') {
            sum += num;
        }
        else if (sign == '-') {
            sum -= num;
        }
        else if (sign == ';') {
            cout<<sum<<endl;
            sum=0;
            sum+=num;
        }
        
    }
     cout<<sum<<endl;
    return 0;
}
