/*
Lowai Dobie
CSCI-135
lab 3a
east-storage.cpp
asks the user to input a string representing 
the date (in MM/DD/YYYY format), and prints 
out the East basin storage on that day.
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
    
    string date, input_date;
    double eastSt, eastEl, westSt, westEl;
    
    cout<<"Please enter a date: ";
    cin>> input_date;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
         // this loop reads the file line-by-line
         // extracting 5 values on each iteration 
    
         fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                    //ignorring the remaining columns 
    // YOUR WORK STARTS HERE
    // Part A
         if(date == input_date){
             cout<<"East basin storage: "<< eastSt<< endl;
             break;
         }
}
    fin.close();
    return 0;
}