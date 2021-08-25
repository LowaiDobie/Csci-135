/*
Lowai Dobie
CSCI-135
month.cpp
Tong Yi
asks the user to input the year and the month 
(1-12) and prints the number of days
in that month 
(taking into account leap years).
2/2/2021
*/
#include <iostream>
using namespace std;
int main(){
    int year, month;
    cout<<"Enter year: "<<endl;
    cin>>year;
    cout<<"Enter month: "<<endl;
    cin>>month;
	if( month == 2)
	{
		if((year%400==0) || (year%4==0 && year%100!=0))	{
			cout<<"29 days";
		}
		else{	
			cout<<"28 days";
		}
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8
	||month == 10 || month==12){	
		cout<< "31 days";
	}	
	else{ 		
		cout<< "30 days";
	}
    return 0;
}
