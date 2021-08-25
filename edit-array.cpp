/*
Lowai Dobie
CSCI-135
edit-array.cpp
Tong Yi
creates an array of 10 integers, 
and provides the user with an interface to edit 
any of its elements
2/8/2021
*/
#include <iostream>
using namespace std;
int main()
{
    int myData[10];                 // step 1
    for (int i = 0; i< 10; i++){     // step 2
        myData[i]=1;
    }
    int index, value;
    while (index >=0 && index < 10){
        for (int i = 0; i< 10; i++){     // step 3
            cout<< myData[i]<<" ";
        }
    cout<<endl;
    
    cout<<"Please enter an index: ";
    cin>>index;
    cout<<"Please enter a value: ";
    cin>>value;
    if (index >=0 && index < 10){
        myData[index]=value;
    }
}
cout<<"Index out if range. Exit."<<endl;
    return 0;
}
