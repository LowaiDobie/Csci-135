/*******************************************************************************
Lowai Dobie
CSCI-135
E6.18
that appends one vector after anothe
5/8/21
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
vector<int> append(vector<int> a, vector<int> b){
     for(int i=0; i < b.size();i++){
            a.push_back(b[i]);
        }
    return a;
}

int main(){
    vector<int> a ={1, 4, 9, 16};
    vector<int> b ={9, 7, 4, 9, 11};
    vector<int> v2 = append(a, b);
    for(int i=0; i < v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}
    

