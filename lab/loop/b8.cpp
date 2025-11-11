#include <iostream>
#include <iomanip>
/*Write a program that inputs an array of N real numbers, and then finds and prints the largest element in the array. N should be an input parameter.

Input:

The first line contains integer N, N >= 1
The second line contains N real numbers
Output:
The largest element in the array, round up to 2 digits after decimal point*/
using namespace std;

int main()
{
    int n; cin >> n;
    float num[n];
    float max = 0.0;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] > max)
            max = num[i];
    }

    cout << fixed << setprecision(2);
    cout << max <<endl;
    return 0;
}