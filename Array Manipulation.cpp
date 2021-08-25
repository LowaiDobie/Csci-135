/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 3 Quiz
Array Manipulation
Initialize an array of numbers 1-10 Uses ‘cout >>’
to print each number on a separate line
Tong Yi
3/9/21
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 1; i < 11; i++) {
        arr[i] = i;
    }
    for (int i = 1; i < 11; i++) {
        cout << arr[i] << endl;
    }

    return 0;

}

