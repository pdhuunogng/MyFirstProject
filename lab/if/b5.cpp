#include <iostream>
// tìm số lớn nhất trong 3 số a, b, c
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a<<endl;
        }
        else
        {
            cout << c <<endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b <<endl;
        }
        else
        {
            cout << c <<endl;
        }
    }
    return 0;
}