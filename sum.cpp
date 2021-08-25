/*
Lowai Dobie
CSCI-135
Project 1 A
Tong Yi
creates an array of 10 integers, 
and provides the user with an interface to edit 
any of its elements
2/8/2021
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int s, sum;
    sum = 0;           //set the variable sum equal to zero
        while (cin >> s) { // While the reading operation is a success
            sum += s;          // adds up the integers 
        }
    cout << sum << endl; // prints sum

    return 0;
}

