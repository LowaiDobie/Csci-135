/*
Lowai Dobie
CSCI-135
fibonacci.cpp
Tong Yi
which uses an array of ints to compute and print all
Fibonacci numbers from F(0) to F(59).
2/8/2021
*/
#include <iostream>
using namespace std;
int main()
{
// make an array
int fib[60];
// first two terms are given
fib[0] = 0;
fib[1] = 1;
cout << fib[0] << endl << fib[1] << endl;
// and all the following ones can be computed iteratively as
for (int i=2; i <60; i++){  // loop from 2
    fib[i] = fib[i-1] + fib[i-2];
    cout<<fib[i]<<endl<<" ";
}
    
    return 0;
}
