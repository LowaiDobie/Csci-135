/*
Lowai Dobie
CSCI-135
Lab 4
lower.cpp 
Write a program lower.cpp that 
prints the bottom-left half of a square, 
given the side length.
3/5/21
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Input size: ";
    cin>>size;
    cout<<"Shape: "<<endl;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(j<=i){
                cout<<"*";
            }
            else{
              cout<<" ";  
            }
        }
    cout<<endl;
    }
    return 0;
}
