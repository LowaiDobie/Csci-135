/******************************************************************************

MIDTERM SAMPLE QUESTION 10

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int findOc(string str, char str1);
int main()
{
    string str;
    char str1;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Enter character: ";
    cin >> str1;
    cout << findOc(str, str1);
    return 0;
}
int findOc(string str, char str1) {
    size_t found = str.find(str1);
    if (found != string::npos) {
        cout << "First occurrence is " << found << endl;
    }
    return -1;
}