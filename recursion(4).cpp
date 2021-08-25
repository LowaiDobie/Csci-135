/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 13
Task D
recursion.cpp
returns true if all characters in the string are letters and digits, otherwise returns false.
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
int sumArray(int *arr, int size){
    if(size==1){
        return arr[0];
    }
    return arr[size-1]+sumArray(arr, size-1);
}
bool isAlphanumeric(string s){
    if(s.size()==0){
        return true;
    }
    if (!isalpha(s[0]) and !isdigit(s[0])){
        return false;
    }
    return isAlphanumeric(s.substr(1, s.size()-1));
}
int main(){
    
    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
    
    return 0;
}
    

