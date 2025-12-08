/*
Write a program that converts the number of days into years, weeks and days. 
Example: 1532 days = 4 years + 10 weeks + 2 days. 
Student needs to assign value to number of days and display the result as example. 
Assume a year has 365 days.
Input: one line contains number n - the number of days (0≤n≤1000000)
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n; cin >> n;
    int yr = n/365;
    int w = (n - yr *365)/7;
    int d = n - yr*365 - w*7;
    cout  << n << " days" << " = " << yr << " years + " << w << " weeks + " 
    << d << " days." <<endl;
    return 0;
}