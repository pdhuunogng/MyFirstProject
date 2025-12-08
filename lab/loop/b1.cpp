#include <iostream>
#include <iomanip>
/*
Write a program that inputs an array of N real numbers, and then computes and prints 
the average value of the array elements. N should be an input parameter.
Input:
The first line contains integer N, N >= 1
The second line contains N real numbers
Output:
The average value of the array elements, round up to 2 digits after decimal point
*/
using namespace std;

int main()
{
    //input N
    int n; cin >> n;
    double x, sum;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(2);
    cout << sum/n <<endl;

    return 0;
}