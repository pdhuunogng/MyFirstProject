#include <iostream>

using namespace std;

int max3(int a, int b, int c);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = max3(a, b, c);
    cout << "max = " << max << endl;
    return 0;
}

int max3(int a, int b, int c)
{
    int maxx = 0;
    if ( a > b)
        if (a > c)
            maxx = a;
        else
            maxx = c;
    else
        if (b > c)
            maxx = b;
        else
            maxx = c;
    return maxx;
}