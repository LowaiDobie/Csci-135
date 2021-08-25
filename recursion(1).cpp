/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 13
Task A
recursion.cpp
prints all numbers in range left ≤   x   ≤ right, 
separated by spaces. (Don’t use loops, global or static variables.)
5/8/21
*******************************************************************************/
#include <iostream>
using namespace std;
void printRange(int left, int right){
     if (left==right) {
        cout << left << " ";
     }
     else if(left < right){
         cout << left << " ";
         printRange(left+1, right);
     }
     // make recursive call, counting 
                            // from (n-1) down to 1
}
int main(){
    
    printRange(-2, 10);
    
    return 0;
}
    

