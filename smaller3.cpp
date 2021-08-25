/*
Lowai Dobie
CSCI-135
smaller.cpp
Tong Yi
Asks the user to input three integer numbers
Prints out the smallest of the three.
2/1/2021
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, z;
    cout << "Please enter the first number: " << endl;
    cin >> num1;
    cout << "Please enter the second number: " << endl;
    cin >> num2;
    cout << "Please enter the third number: " << endl;
    cin >> num3;
    if (num1 < num2) {
        if (num1<num3){
        cout << "The smaller of the three is: " << num1 << endl;  
        }
        
    }
        if (num2 < num1) {
            if (num2<num3){
            cout << "The smaller of the three is: " << num2 << endl;  
        }
        
    }
        if (num3 < num1) {
            if (num3<num2){
            cout << "The smaller of the three is: " << num3 << endl;  
        }
        
    }
    return 0;
}