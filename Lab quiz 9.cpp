/*******************************************************************************
Lowai Dobie
CSCI-135
Lab quiz 9.cpp
Brackets define int unbalanced_brackets(string input),
return difference of unbalanced open and closed brackets. 
Ex: input “{{}” returns 1, “{}}}}” returns -3, “}{}{{{“ returns 2
Tong Yi
4/12/21
*******************************************************************************/
#include <string>
#include <iostream>

using namespace std;

int unbalanced_brackets(string input){
    int a = 0;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '{'){
            a++;

        }
        else if(input[i] == '}'){
            a--;
        }
    }
    return a;
}

int main(){
    string str;
    int x;
    cout << "Enter the brackets: ";
    cin >> str;
    x = unbalanced_brackets(str);

    cout << x;
    
    
    return 0;
}