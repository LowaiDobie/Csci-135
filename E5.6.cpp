/*******************************************************************************
Lowai Dobie
CSCI-135
E5.6
middle
returns a string containing the middle character in str if the length of str is odd,
or the two middle characters if the length is even.
Tong Yi
3/9/21
*******************************************************************************/
#include <iostream>
using namespace std;
string middle(string str);
int main() {
    string str;
    cout<<"Please enter a word: ";
    cin>>str;
    cout<<middle(str)<<endl;
    return 0;
}
string middle(string str) {
   int size=str.length();
    if (size % 2 == 0) {
        return str.substr((size-1)/2, 2);
    } else {
        return str.substr(size/2, 1);
    }
}