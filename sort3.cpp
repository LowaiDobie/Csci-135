/*******************************************************************************
Lowai Dobie
CSCI-135
E5.14
sort3
Write a function void sort2(int& a, int& b) that swaps the values of a and b if a is
greater than b and otherwise leaves a and b unchanged.
3/9/21
*******************************************************************************/
#include <iostream>
using namespace std;
void sort3(int& a, int& b, int& c);
int main() {


    return 0;

}
void sort3(int& a, int& b, int& c) {

    int temp;

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
}