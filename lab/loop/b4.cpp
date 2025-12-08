#include <iostream>
#include <iomanip>
/*
Write a program that computes and prints x raised to the power n and power -n by repetitive multiplication.
Input:
The first line contains integer n, n >= 0
The second line contains real numbers x, x≠0
Output:
x^n x^−n
Note: 
Each value in output round up to 2 digits after decimal point, separated by 1 space character and no character after last value
Do not use cmath or math.h library
*/
using namespace std;

int main()
{
    int n; cin >> n;
    double x; cin >> x;
    while (n < 0)
    {
        cin >> n;
    }
    while (x == 0)
    {
        cin >> x;
    }

    double a = 1, b = 1;
    for (int i = 0; i < n; i ++)
    {
        a *= x;
        b *= 1/x;
    }

    //double aa = a*1000;
    //double bb = b*1000;
    int aaa = a*1000;
    int bbb = b*1000;
    if(aaa %10 >= 5)
    {
        aaa += 10;
    }
    aaa /= 10;
    if(bbb %10 >= 5)
    {
        bbb += 10;   
    }
    bbb /= 10;
    cout << fixed << setprecision(2);
    cout << (double)aaa/100 << " " << (double)bbb/100 <<endl;

    return 0;
}