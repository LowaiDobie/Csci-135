/*
Lowai Dobie
CSCI-135
lab 3a
minmax.cpp
finds the minimum and maximum storage 
in East basin in 2018.
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
    
    string date;
    double eastSt, eastEl, westSt, westEl;
    double min = INT_MAX; // INT_MAX is a c++ value, represents the maximum vlaue of int type
    double max = INT_MIN;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
         // this loop reads the file line-by-line
         // extracting 5 values on each iteration 
    
         fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                    //ignorring the remaining columns 
    // YOUR WORK STARTS HERE
    // Part B
         if(eastSt<min){         // keep track of the "min" value so far.
                                 // if we find a new candidate for 'min'
                                // smaller than current 'min'
                                //then we have a new 'min' value 
            min= eastSt; 
         }
         if (eastSt > max){
             max =eastSt;
         }
    }
    cout<< "minimum storage in East basin: "<<min<<endl;
    cout<< "maximum storage in East basin: "<<max<<endl;

    fin.close();
    return 0;
}