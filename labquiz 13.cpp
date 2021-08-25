/*******************************************************************************
Lowai Dobie
CSCI-135
Task 
labquiz 13 
Lab Quiz 13 - Vectors Begins with an introductory comment Contains a 
function vector<int> makeVector(int n) taking an integer as a parameter,
and returns a vector of n integers that range from 0 to n - 1. 
Nonpositive input returns an empty vector.
Tong Yi
5/17/21
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
vector<int> makeVector(int n){
    vector<int> ans;
    while(n<0){
        return ans;
    }
    for(int i = 0; i < n; i++){
        ans.push_back(i);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Please enter an integer: ";
    cin>>n;
    if(n<0){
        cout<<endl;
        cout<<"Vector is empty because input was nonpositive."<<endl;
    }
    vector<int> v1 = makeVector(n);
    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
