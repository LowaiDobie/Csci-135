/*
Lowai Dobie
CSCI-135
print-interval.cpp
Tong Yi
asks the user to input two integers L and U
(representing the lower and upper limits of the interval),
and print out all integers in the range L ≤ i < U separated by spaces.
2/8/2021
*/
#include <iostream>
using namespace std;
int main()
{
    int L, U;
    cout<<"Please enter L: ";
    cin>>L;
    cout<<"Please enter U: ";
    cin>>U;
    for(int i=L ; i<U; i++){            // This is a for loop that takes L and U input 
        cout<<i<<" ";                   // and loops it goes up by one until the condtion is met
    }


    return 0;
}
