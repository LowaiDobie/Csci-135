/*
Lowai Dobie
CSCI-135
lab 3a
reverse-order.cpp
asks the user to input two dates
(earlier date then later date)
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
    
    string date, ealier, later, date_arr[370];
    double eastSt, eastEl, westSt, westEl, westEl_arr[370];
    
    
    cout<<"Please enter starting date: ";
    cin>>ealier;
    cout<<"Please enter ending date: ";
    cin>>later;
    int index=0;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
         // this loop reads the file line-by-line
         // extracting 5 values on each iteration 
    
         fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                    //ignorring the remaining columns 
    // YOUR WORK STARTS HERE
    // Part D
        if (date >= ealier && date <= later){
            date_arr[index]=date;
            westEl_arr[index]=westEl;
            index++;
        }
    }
    // print in reverse order.
    for(int i = index-1; i>=0; i--){
        cout<<date_arr[i]<<" "<<westEl_arr[i]<<endl;
    }
    
    fin.close();
    return 0;
}