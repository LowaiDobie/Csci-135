/*
Lowai Dobie
CSCI-135
Lab 4
checkerboard3x3.cpp
Write a program checkerboard3x3.cpp that asks
the user to input width and height and prints a
checkerboard of 3-by-3 squares. 
(It should work even if the input dimensions are not a multiple of three.)
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
            if((i/3+j/3)%2==0){
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