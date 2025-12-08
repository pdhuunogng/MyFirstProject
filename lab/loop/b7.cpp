#include <iostream>
/*The Fibonacci sequence is 0, 1, 1, 2, 3, 5, 8, 13,…, where the first two terms are 0 and 1, 
and each term thereafter is the sum of the two preceding terms, that is, 
Fibn=Fibn−1+Fibn−2.
Using this information, write a program that computes and stores the Fibonacci sequence in an integer array F, 
such that  F[i] will store the (i+1)th number in a Fibonacci sequence. 
The size of the array is an input parameter which is entered by the user.
Input: 
Integer size, 90 >= size >= 1
Output:
Every value of the array, each value separated by 1 space character, no character after the last value
*/
using namespace std;

int main()
{
    int n; cin >> n;
    long long fibo[n];
    fibo[0] = 0; fibo[1] = 1;
    //tính số fibonacci
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    //in ra dãy fibonacci
    for (int i = 0; i < n; i++)
    {
        cout << fibo[i];
        cout << " ";
    }

    cout <<endl;
    return 0;
}