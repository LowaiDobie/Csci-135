/*******************************************************************************
Lowai Dobie
CSCI-135
Lab 7
Task A
indent.cpp
enhances the program from the previous task.
As it reads the input line by line, it should also
count the number of open and closed { } in it,
and keep track of how many blocks is currently
open at the beginning of each line.
3/22/21
*******************************************************************************/
#include <iostream>
#include <cctype>      //useful functions for char type.
#include <string>     //useful functions for string type.
using namespace std;
//Prototpye:
string removeLeadingSpaces(string line);
int countChar(string line, char c);
void indent();
int main() {
    indent();
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
int countChar(string line, char c) {
    int ans = 0;
    for (int i = 0; i < line.length();i++) {
        if (line[i] == c) {
            ans++;
        }
    }
    return ans;
}
void indent() {
    string line;
    int open_braces;
    int closed_braces;
    int open_blocks = 0;
    int indentation_level;
    while (getline(cin, line)) {
        line = removeLeadingSpaces(line); //need to remove spaces first.
        indentation_level = open_blocks;
        if (line[0] == '}') {
            indentation_level = open_blocks - 1;
        }
        for (int i = 0; i < indentation_level; i++) {
            cout << "\t";
        }
        open_braces = countChar(line, '{');
        closed_braces = countChar(line, '}');
        open_blocks += open_braces - closed_braces;
        cout << line << endl;
    }

}