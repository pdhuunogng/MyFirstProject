#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int sum=0, d=2;
    while (d <= n)
    { 
        sum += d; 
        d += 2; 
    }
    /*
    int n; cin >> n;
    int sum=0, d=2;
    do
    { 
        sum += d; 
        d += 2; 
    }
    while (d <= n);
    */
    cout << sum;
    return 0;
}