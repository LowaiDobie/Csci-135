/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 6
Task C
vigenere.cpp
mplement a testing interface similar 
to the one in Task B, the user enters
the plaintext and the keyword, 
and the program reports the ciphertext.
3/15/21
*******************************************************************************/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
char shiftChar(char c, int rshift);
string encryptVigenere(string plaintext, string keyword);
int main() {
    string keyword;
    string plaintext;
    cout<<"Enter plaintext: ";
    getline(cin, plaintext);
    cout<<"Enter keyword: ";
    cin>>keyword;
    cout<<encryptVigenere(plaintext, keyword);
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
string encryptVigenere(string plaintext, string keyword){
    string ans;
    int j=0;
    for(int i=0; i<plaintext.length();i++){
        if(isalpha(plaintext[i])){
            ans += shiftChar(plaintext[i], keyword[j] - 'a');
            j++;
        }
        else{
            ans+=plaintext[i];
        }
        if(j==keyword.length()){
            j=0;
        }
    }
    return ans;
}