/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 5
numbers.cpp
Write a program that defines a function
If n is divisible by d, the function should return true, 
otherwise return false.
3/7/21
Tong Yi
*******************************************************************************/
#include <iostream>
using namespace std;
bool isPrime(int n);
bool isDivisibleBy(int n, int d); //defining function
int nextPrime(int n);
int countPrimes(int a, int b);
int main() {
    int a, b;
    cout<<"Please enter a number: ";
    cin>>a;
    cout<<"Please enter a number: ";
    cin>>b;
    cout<<countPrimes(a, b) << endl;
    return 0;
}
bool isPrime(int n){
    if (n <= 1) {
        return false;
    }
    for(int i=2; i<n; i++){
        if(isDivisibleBy(n, i))
            return false;  
    }
    return true;
}
bool isDivisibleBy(int n, int d) {
    if (d == 0) {
        return false;
    }
    int rem = n % d;               //creating variable for remainder 
        if (rem == 0) {
            return true;            //cheking to see if remainder is equal to zero, if yes then it returns true
        }
        else {
            return false;           //otherwise, returns false
        }
}
int nextPrime(int n) {
    int ans = n + 1;
    while (!isPrime(ans)) {
        ans++;
    }
    return ans;
}
int countPrimes(int a, int b){
    int counter = 0;
    for (int i=a; i<=b; i++){
        if (isPrime(i)){
            counter++;
        }
    }
    return counter;
}