/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 13
Task E
recursion.cpp
which returns true if the string is a sequence of nested parentheses
Any other symbols or mismatching parenthesis should make the function return false.
5/15/21
*******************************************************************************/
#include <iostream>
#include <string>
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
bool nestedParens(string s) {
   if(s.length() == 0) {
       return true;
   } else if(s.length() < 2) {
       return false;
   } else {
       if(s[0] == '(' && s[s.size()-1] == ')') {
           return nestedParens(s.substr(1, s.size()-2));
       } else {
           return false;
       }
   }
}

int
main ()
{
  cout << nestedParens("((()))") << endl;      // true (1)
  cout << nestedParens("()") << endl;          // true (1)
  cout << nestedParens("") << endl;            // true (1)

  cout << nestedParens("(((") << endl;         // false (0)
  cout << nestedParens("(()") << endl;         // false (0)
  cout << nestedParens(")(") << endl;          // false (0)
  cout << nestedParens("a(b)c") << endl;       // false (0)
  return 0;
}
