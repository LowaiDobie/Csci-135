/*
Lowai Dobie
CSCI-135
lab 3a
compare.cpp
asks the user to input two dates 
(the beginning and the end of the interval).
2/22/2021
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main(){
    // read the datafile
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);           // exit if failed to open the file
    }
    string junk;         // new string variable
    getline(fin, junk); // read one line from the file
    
    string date, ealier, later;
    double eastSt, eastEl, westSt, westEl;

    cout<<"Please enter starting date: ";
    cin>>ealier;
    cout<<"Please enter ending date: ";
    cin>>later;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
         // this loop reads the file line-by-line
         // extracting 5 values on each iteration 
    
         fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                    //ignorring the remaining columns 
    // YOUR WORK STARTS HERE
    // Part C
        if (date >= ealier && date <= later){
            if (westEl> eastEl){
                cout<<date<<" West"<<endl;
            }
            else if(westEl<eastEl){
            cout<<date<<" East"<<endl;
            }
            else{
                cout<<date<<" Equal"<<endl;
            } 
        }
    }
    
    

    fin.close();
    return 0;
}