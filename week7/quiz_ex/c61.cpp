#include <iostream>

using namespace std;

int main()
{
    cout << "nhap n (n>= 1): ";
    int n; cin >> n;
    int count = 0;

    if (n == 1)
    {
        cout << "So buoc: 0\n";
        return 0;
    }

    do
    {
        if (n%2 == 0)
        {
            n = n/2;
            count ++;
        }
        else
        {
            n = 3*n + 1;
            count ++;
        }
    }
    while (n != 1);
    cout << "So buoc: " << count <<endl;
    return 0;
}