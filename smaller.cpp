/*
Lowai Dobie
CSCI-135
smaller.cpp
Tong Yi
Asks the user to input two integer numbers and prints out the smaller of the two.

*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Please enter the first number: "<<endl;
    cin>>num1;
    cout<<"Please enter the second number: "<<endl;
    cin>>num2;
    if(num1<num2){
        cout<<"The smaller of the two is: "<<num1<<endl;
    }
    else{
        cout<<"The smaller of the two is: "<<num2<<endl;
    }
    return 0;
}
