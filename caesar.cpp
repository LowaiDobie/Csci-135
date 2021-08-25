/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 6
Task B
caesar.cpp
ask the user to input a plaintext sentence, 
then enter the right shift, and report the ciphertext computed 
using your encryption function.
3/15/21
*******************************************************************************/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
char shiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
int main() {
    string plaintext;
    int rshift;
    cout<<"Enter plaintext: ";
    getline(cin, plaintext);
    cout<<"Enter shift: ";
    cin>>rshift;
    cout<<encryptCaesar(plaintext, rshift);
    return 0;
}
char shiftChar(char c, int rshift){
   if(islower(c)){
     return(c-'a'+rshift)%26 +'a';  
   } 
   if(isupper(c)){
       return(c-'A'+rshift)%26 +'A'; 
   }
   return c;
}
string encryptCaesar(string plaintext, int rshift){
    string ans;
    for (int i=0; i<plaintext.size(); i++){
         ans+=shiftChar(plaintext[i], rshift);
    }
    return ans;
}