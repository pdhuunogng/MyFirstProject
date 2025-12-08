#include <iostream>
#include <cmath>
// xác định tam giác đều/ cân/ vuông / thường
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int hc = sqrt(a*a + b*b);
    int hb = sqrt(a*a + c*c);
    int ha = sqrt(b*b + c*c);
    if ((a+b < c) || (a+c < b) || (b+c < a))
    {
        cout << "invalid\n";
    }
    else if (a == b || a == c || b == c)
    {
        if (a == b == c)
        {
            cout <<"The triangle is Equilateral.\n"; 
        }
        else
        {
            cout <<"The triangle is Isosceles.\n";
        }
    }
    else if (c == hc || a == ha || b == hb)
    {
        cout <<"The triangle is Right-angled.\n";
    }
    else
    {
        cout <<"The triangle is Scalene.\n";
    }
    return 0;
}