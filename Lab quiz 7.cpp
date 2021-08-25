/*******************************************************************************
Lowai Dobie
CSCI-135
Lab quiz 7.cpp
//define the function `void remove_e(string & sentence)` 
Removes all `e` characters from the original string
Tong Yi
4/13/21
*******************************************************************************/
#include <iostream>
using namespace std;

void remove_e(string & sentence);

int main(){
    string x;
    cout << "Enter string: ";
    getline(cin, x);
    remove_e(x);
}
    
void remove_e(string & no_e){
    string new_string = "";
    for(int i=0; i< no_e.length(); i++){
        if(no_e[i]!='e'){
            new_string += no_e[i];
        }
    }
    no_e = new_string;
}