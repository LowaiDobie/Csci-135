/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 6
Task A
test-ascii.cpp
asks the user to input a line of text
(which may possibly include spaces).
The program should report all characters from the input line together
with their ASCII codes.
3/15/21
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Please ente a string: ";
    getline(cin, s);
    for (int i = 0; i < s.length();i++) {
        char printOut = char(s[i]);
        int printOut1 = int(s[i]);
        cout << printOut << " " << printOut1 << endl;
    }
    return 0;
}