/*******************************************************************************
Lowai Dobie
CSCI-135
Labquiz 4
Reading Files: Open and read a file called "data.txt", 
which contains lines of text with names of colors and their RGB values, 
like this: red FF0000 etc... 
Read and print each line.
Close the file after processing it.
Tong Yi
4/9/21
*******************************************************************************/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string line;
    ifstream file("data.txt");
    if(file.is_open()){
        while(getline(file, line)){
            cout<<line<<endl;
        }
        file.close();
    }
    else{
        cout<<"Error Opening file."<<endl;
    }
    return 0;
}
