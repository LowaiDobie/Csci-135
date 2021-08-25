/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 13
Task B
recursion.cpp
computes the sum of all numbers in range 
left ≤   x   ≤ right. (Don’t use loops, global or static variables.)
5/10/21
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
int sumRange(int left, int right){
    if (left>right){
        return 0;
    }
    if (left == right){
        return left;
    }
    return left + sumRange(left + 1, right);
}
int main(){
    
    int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << "That is " << y << endl;  
    return 0;
}
    

