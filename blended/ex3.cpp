#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter a natural number (> 1): ";
    int n; cin >> n;

    int m = n;
    for (int i = 2; i <= sqrt(m); i++)
    {
        while (n%i == 0)
        {
            cout << i;
            n /= i; 
            if (n != 1)
                cout << "*";
        }
    }
}
