/*******************************************************************************
Lowai Dobie
CSCI-135
Project 1D
calc3.cpp
Write an even better calculator program calc3.cpp that
can understand squared numbers
3/6/21
Tong Yi
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int total = 0; //defines total to be eual to zero
    int num;        // defines that variable num as integer 
    char op1 = '+'; //defining the operation variable to see if (+) or (-)
    char op2;       //defines op2 as a character

    while (cin >> num >> op2)   //While loop so that we get through all numbers
    {
        if (op2 == '^') {    //if operation is raised using ^
            if (op1 == '+') //if operation is a +, do addition
            {
                total += num * num;
            }
            else if (op1 == '-') //else if, do subtraction
            {
                total -= num * num;
            }
            cin >> op1;     //stores input in op1
        }
        else {
            if (op1 == '+')     //if operation is a +, do addition
            {
                total += num;
                op1 = op2;      //assigns op1 to op2
            }
            else if (op1 == '-')    //else if, do subtraction
            {
                total -= num;
                op1 = op2;
            }
        }
        if (op1 == ';')
        {
            cout << total << endl; //print the total
            total = 0;
            op1 = '+';
        }
    }
    return 0;
}