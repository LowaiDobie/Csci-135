/*******************************************************************************
Lowai Dobie
CSCI-135
Task D
poem.cpp
keep creating poems, 
but all dynamically allocated memory should get 
deleted when it is not needed.
Tong Yi
4/12/21
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
        
        // assume that the poem p is not needed at this point
        delete p;
    }
}