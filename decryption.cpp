/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 6
Task D
decryption.cpp
ask the user to input plaintext,
then ask for a right shift for the Caesar cipher
and report the ciphertext and its subsequent decryption.
After that, it should do the same for the Vigenere cipher.
3/15/21
*******************************************************************************/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string decryptVigenere(string ciphertext, string keyword);
string decryptCaesar(string ciphertext, int rshift);
char unshiftChar1(char c, int rshift);
int main() {
    int rshift;
    string keyword;
    string ciphertext;
    cout << decryptCaesar("hhh iii ggg", 20) << endl;
    cout << decryptVigenere("Ebiil, Tloia!", "x") << endl;
    return 0;

}
char unshiftChar1(char c, int rshift) {
    if (islower(c)) {
        return(c - 'a' - rshift + 26) % 26 + 'a';
    }
    if (isupper(c)) {
        return(c - 'A' - rshift + 26) % 26 + 'A';
    }
    return c;
}
string decryptVigenere(string ciphertext, string keyword) {
    string ans;
    int j = 0;
    for (int i = 0; i < ciphertext.length();i++) {
        if (isalpha(ciphertext[i])) {
            ans += unshiftChar1(ciphertext[i], keyword[j] - 'a');
            j++;
        }
        else {
            ans += ciphertext[i];
        }
        if (j == keyword.length()) {
            j = 0;
        }
    }
    return ans;
}
string decryptCaesar(string ciphertext, int rshift) {
    string ans;
    for (int i = 0; i < ciphertext.size(); i++) {
        ans += unshiftChar1(ciphertext[i], rshift);
    }
    return ans;
}