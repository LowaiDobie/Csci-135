/*******************************************************************************
Lowai Dobie
CSCI-135
E8.1
Write a program that carries out the following tasks:
Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it.
3/12/21
*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("hello.txt"); //Open a file with the name hello.txt.

    out << "Hello, World!"; //Store the message “Hello, World!” in the file.
    out.close();

    ifstream in;
    in.open("hello.txt"); //Close the file

    string str;
    getline(in, str);   //Reads the message into a string variable

    cout << str << endl;    //prints it
    in.close();


    return 0;
}