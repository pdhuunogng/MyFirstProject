#include <iostream>
// xác định số dương/ âm/ không
using namespace std;

int main()
{
    int n; cin >> n;
    if (n > 0)
    {
        cout  << n << " is a positive number.\n";
    }
    else if (n < 0)
    {
        cout << n << " is a negative number.\n";
    }
    else
    {
        cout << n << " is neither a positive nor a negative number.\n";
    }
    return 0;
}