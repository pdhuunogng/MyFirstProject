#include <iostream>
// xác định năm nhuận/ không nhuận
using namespace std;

int main()
{
    int n; cin >> n;
    if (n%100 == 0)
    {
        if (n%400 == 0)
        {
            cout << n << " is a leap year." <<endl;
        }
        else
        {
            cout << n << " is not a leap year." <<endl;
        }
    }
    else
    {
        if (n%4 == 0)
        {
            cout << n << " is a leap year." <<endl;
        }
        else
        {
            cout << n << " is not a leap year." <<endl;
        }
    }
    return 0;
}