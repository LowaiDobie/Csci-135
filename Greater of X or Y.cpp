/*
Lowai Dobie
CSCI-135
Lab Quiz 02 - Greater of X or Y
Enter two integers from console, 
find out the bigger of these two integers.
*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    double x, y;
    cout<<"Enter the first number: "; // Takes input for first value
    cin>>x;                           // stores it as x
    cout<<"Enter the second number: "; // Takes input for second value
    cin>>y;                            // stores it as y
    if (x>y){
        cout<<"The larger of the two is "<<x<<endl;            // prints max if x>y
    }
    else{
        cout<<"The larger of the two is "<<y<<endl;            // prints max if x>y
    }
    return 0;
}
