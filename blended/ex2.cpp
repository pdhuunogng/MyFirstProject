#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isPrime = true; 
    cout << "Enter a positive integer (>1): ";
    int n; cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
            isPrime = false;
    }
    if (isPrime)
        cout << n << " is a prime number.\n";
    else
        cout << n << " is not a prime number.\n";

    return 0;
}