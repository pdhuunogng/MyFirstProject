#include <iostream>

using namespace std;

int max(int x, int y, int z);

int main()
{
    int a, b, c;
    cout << "enter 3 intergers: ";
    cin >> a >> b >> c;
    cout << "maximum is: " << max(a, b, c) <<endl;
    return 0;
}

int max(int x, int y, int z)
{
    int max = 0;
    if ( x >= y)
    {
        max = x;
        if (z >= x)
            max = z;
    }
    else
    {
        max = y;
        if (z >= y)
            max = z;
    }
    return max;
}