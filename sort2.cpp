/*******************************************************************************
Lowai Dobie
CSCI-135
E5.14
sort2
Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is
greater than b and otherwise leaves a and b unchanged.
3/9/21
*******************************************************************************/
#include <iostream>
using namespace std;
void sort2(int& a, int& b);
int main() {
    return 0;
}
void sort2(int& a, int& b){
 int c;
 if(a>b){
     int c;
     c=a;
     a=b;
     b=c;
     
    }
}