#include <iostream>
#include <iomanip>
#include <math.h>
/*Write a program to tabulate sin(x), cos(x) and tan(x) for x = 5, 10, 15,…, 85 degrees. 
Note: 

x is an integer number, runs from 5 to 85, each value separated by 5 units.
We have to convert x from degrees to radians before using standard functions sin(x), cos(x), tan(x) of math.h library.
For this exercise only, we let π=3.14
 
Input:

None
Output:
For each value of x, 3 values sin(x), cos(x) and tan(x) are outputted, round up to 2 digits after decimal point, each separated by 1 space character, newline character after last value, except when x = 85 degree then no newline character*/
using namespace std;

int main()
{
    float pi = 3.14;
    float conv;
    cout << fixed << setprecision(2);

    for (int i = 5; i <= 85; i += 5)
    {
        conv = (i * pi)/180;
        cout << left << sin(conv) << " " << cos(conv)
            << " " << tan(conv) <<endl;
    }

    return 0;
}