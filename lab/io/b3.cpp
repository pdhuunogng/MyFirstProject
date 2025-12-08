/*
Write and run a program that performs the following steps:
- Assigning value to a Fahrenheit temperature f. (-300 ≤ f ≤ 300)
- Calculating the equivalent Celsius temperature C using the formula: C = (5.0/9)(f –32).
- Print the answer with exact only 2 digits after decimal
Displaying the Celsius temperature C.
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int F; cin >> F;
    double C = (5.0/9) * (F - 32);
    cout << fixed << setprecision(2) << C <<endl;
    return 0;
}