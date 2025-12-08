#include <iostream>
/*The Fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13,…, where the first two terms are 0 and 1, 
and each term thereafter is the sum of the two preceding terms, that is, 
Fibn=Fibn−1+Fibn−2.
Using this information, write a program that calculates the nth number in a Fibonacci sequence, 
where n is entered into the program by the user.
Input: 
Integer n, 90 >= n >= 1
Output:
The calculated value
*/
using namespace std;

int main()
{
    int n; cin >> n;

    long long fibo[n];
    fibo[0] = 0; fibo[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << fibo[n - 1] <<endl;

    return 0;
}