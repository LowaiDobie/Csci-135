/*******************************************************************************
Lowai Dobie
CSCI-135
E7.1
Sort2
receives two pointers and sorts the values to which they point
Tong Yi
4/9/21
*******************************************************************************/
#include <iostream>
using namespace std;
void sort2(double* p, double* q);
int main() {
    double x, y;
    cout<<"Enter first intger: ";
    cin>>x;
    cout<<"Enter second intger: ";
    cin>>y;
    sort2(&x, &y);
    cout << x <<", "<< y;
    return 0;
}
void sort2(double* p, double* q){
 if(*p>*q){
     double c;
     c=*p;
     *p=*q;
     *q=c;
     
    }
}