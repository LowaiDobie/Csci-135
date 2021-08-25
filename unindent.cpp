/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 7
Task A
unindent.cpp
reads input from cin and prints
out each input line with leading spaces removed.
3/22/21
*******************************************************************************/
#include <iostream>
#include <cctype>      //useful functions for char type.
#include <string>     //useful functions for string type.
using namespace std;
//Prototpye:
string removeLeadingSpaces(string line);
int main() {
    string line;
    while (getline(cin, line)) { //reading string as input
        cout << removeLeadingSpaces(line) << endl;
    }

    return 0;
}
string removeLeadingSpaces(string line) {
    int i;
    for (i = 0; i < line.length();i++) {
        if (!isspace(line[i])) { //if char line[i] is not space
            break; //stops the for loop.
        }
    }
    return line.substr(i, line.length() - i);

}