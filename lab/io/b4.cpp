/*Write and run a program that performs the following steps:

- Assigning value to the radius r.

- Calculating the circumference using the formula: C = 2πr.

- Displaying the circumference.

Given π = 3.14, r is an integer (0 ≤ r ≤ 1000). Just print the answer of the circumference. You don't need to round up to any digit after decimal*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int r; cin >> r;
    cout << fixed <<setprecision(2) << 2*3.14*r <<endl;
    return 0;
}