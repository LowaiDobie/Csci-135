/*******************************************************************************
Lowai Dobie
CSCI-135
E5.21.cpp  
Recursive Reverse
computes the reverse of a string. For example, reverse("flow") should return
"wolf". Hint: Reverse the substring starting at the second character, then add the first
character at the end. For example, to reverse "flow", first reverse "low" to "wol", then
add the "f" at the end.
5/17/21
*******************************************************************************/
#include <iostream>
using namespace std;
string reverse(string str){
    if(str.length()==0){
        return "";
    }
    else{
        return reverse(str.substr(1,str.length()-1))+str[0];
    }
}

int main()
{
    string x;
    
    cout<<"Enter string: ";
    cin>>x;
    
    cout<<"String reversed: "<<reverse(x)<<endl;

    return 0;
}
