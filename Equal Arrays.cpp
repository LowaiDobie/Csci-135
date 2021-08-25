/*******************************************************************************
Lowai Dobie
CSCI-135
E6.8
Equal Arrays
Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is
greater than b and otherwise leaves a and b unchanged.
3/9/21
*******************************************************************************/
#include <iostream>
using namespace std;
bool equals(int a[], int a_size, int b[], int b_size);
int main() {

    return 0;
}
bool equals(int a[], int a_size, int b[], int b_size){
    
    if (a_size != b_size)
    {
        return false;
    }
    for (int i = 0; i < a_size; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
    
}