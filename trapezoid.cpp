/*
Lowai Dobie
CSCI-135
Lab 4
trapezoid.cpp
Write a program trapezoid.cpp that prints 
an upside-down trapezoid of given width and height.
However, if the input height is impossibly large for the given width, 
then the program should report, Impossible shape!
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
    int space=0, stars=width;
    if(width-height<width/2){
        cout<<"Impossible Shape!"<<endl;
    }
    else{
        for(int j=0; j<height; j++){
            for(int i=0; i<space; i++){
                cout<<" ";
            }
            for(int i=0; i<stars; i++){
                cout<<"*";
            }
            cout<<endl;
            space+=1;
            stars-=2;
        }
    }

    return 0;
}
