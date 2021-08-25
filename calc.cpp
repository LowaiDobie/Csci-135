/*
Lowai Dobie
CSCI-135
Project 1 A
a simple calculator that can add and subtract integers,
and will accept arbitrarily long mathematical formulas composed of symbols 
+, -, and non-negative integer numbers.
*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int input;
    char sign = '+';
    cin >> sum;
    while (cin >> sign >> input){
        if (sign == '+'){
            sum += input;
        }
        else if (sign == '-'){
        
            sum -= input;
        }
    }
    cout << sum << endl;
    return 0;
}
