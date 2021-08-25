/*
Lowai Dobie
CSCI-135
Lab 4
checkerboard.cpp
Write a program checkerboard.cpp that asks the user to input width 
and height and prints a rectangular checkerboard of the requested size 
using asterisks and spaces (alternating).
3/5/21
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout<<"Input width: ";
    cin>>width;
    cout<<"Input height: ";
    cin>>height;
    cout<<"Shape: "<<endl;
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if((i+j)%2==0){
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
