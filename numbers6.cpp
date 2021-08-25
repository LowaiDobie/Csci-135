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
bool isTwinPrime(int n);
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
bool isTwinPrime(int n);
int nextTwinPrime(int n);
int main() {
    int n;
    cout << "Please enter a number: ";
    cin >> n;
    cout<<nextTwinPrime(n)<<" is the next Twin Prime";
    return 0;
}
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (isDivisibleBy(n, i))
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
int countPrimes(int a, int b) {
    int counter = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            counter++;
        }
    }
    return counter;
}
bool isTwinPrime(int n) {
    if (isPrime(n) && (isPrime(n - 2) || isPrime(n + 2))) {
        return true;
    }
    return false;
}
int nextTwinPrime(int n){
    int ntp = n+1;
    while(!isTwinPrime(ntp)){
        ntp++;
    }
    return ntp;
}