/*
Lowai Dobie
CSCI-135
E2.10 - Cost per 100 Miles
Tong Yi
asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles 
and how far the car can go with the gas in the tank.
2/8/2021
*/
#include <iostream>
using namespace std;
int main()
{ 
    double gallonsOfGas, fuelEfficiency, priceOfGas;
    cout<<"The number of gallons of gas in the tank: "<<endl;
    cin>>gallonsOfGas;
    cout<<"The fuel efficiency in miles per gallon: "<<endl;
    cin>>fuelEfficiency;
    cout<<"The price of gas per gallon: "<<endl;
    cin>>priceOfGas;
   double costPer100Miles =  (100/fuelEfficiency)*priceOfGas;    // this calcultes the cost per 100 miles
   double howFar=gallonsOfGas*fuelEfficiency;                    // this calcultes how far the car can go with the gas in the tank
   cout<<"the cost per 100 miles is $"<<costPer100Miles<<" "<<"and the car can go "<<howFar<<" miles with the gas in the tank.";

    return 0;
}
