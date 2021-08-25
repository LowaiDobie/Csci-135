/*******************************************************************************
Lowai Dobie
CSCI-135
Lab quiz 8.cpp
Define class Date, which contains public integer members year month day and string member day_of_week. 
Define function `void printDate(Date * input)` 
that prints Date in format, day of week, mo/day/yr “Friday, 10/29/19” “Thursday, 1/3/18”
Tong Yi
4/12/21
*******************************************************************************/
#include <string>
#include <iostream>

using namespace std;
class Date{
    public:
        int year, month, day;
        string day_of_week;
};

void printDate(Date * input) {
    cout << input->day_of_week << ", " 
    << input->month << "/" 
    << input->day << "/" 
    << input->year << endl;

}

int main()
{
    Date Form_Date;
    
    cout << "Enter year: ";
    cin >> Form_Date.year;
    cout << "Enter month: ";
    cin >> Form_Date.month;
    cout << "Enter day: ";
    cin >> Form_Date.day;
    cout << "Enter day of week: ";
    cin >> Form_Date.day_of_week;
    
    printDate(&Form_Date);
    return 0;
}
