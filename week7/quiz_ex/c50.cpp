#include <iostream>
//tinh tong so chan tu 2 -> n
using namespace std;

int main()
{
    int n; cin >> n;
    while (n%2 == 1)
    {
        cin >> n;
    }

    int sum = 0;
    int d = 2;
    while (d <= n)
    {
        sum += d;
        d += 2;
    }
    
    cout << "sum = " << sum <<endl;
    return 0;
}