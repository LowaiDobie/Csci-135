/*******************************************************************************
Lowai Dobie
CSCI-135
Task A
vectors.cpp
A big benefit of vectors is their ability to be returned from functions. For this task,
program a function called vector<int> makeVector(int n) that returns a vector of n
integers that range from 0 to n-1. Call your program vectors.cpp.
Your function must be implemented outside the main function and must return a vector.
5/03/21
*******************************************************************************/
#include <vector>
#include <iostream>

using namespace std;

vector<int> makeVector(int n){
    vector<int>ans;
    for(int i = 0; i<n; i++){
        ans.push_back(i);
    }
    return ans;
}
int main(){
    vector<int>v=makeVector(20);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
    return 0;
}