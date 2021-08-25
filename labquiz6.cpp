/*******************************************************************************
Lowai Dobie
CSCI-135
lab quiz 6
Array Manipulation
define function `int max3(int a, int b, int c)`
that returns the maximum of a, b, and c.
Tong Yi
4/28/21
*******************************************************************************/
#include <iostream>
using namespace std;
int max3(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else if (c > a && c > b) {
        return c;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter value a:";
    cin >> a;
    cout << "Enter value b:";
    cin >> b;
    cout << "Enter value c:";
    cin >> c;
    cout << "The maximum number is " << max3(a, b, c);

    return 0;
}