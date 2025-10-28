#include <iostream>

using namespace std;

int main()
{
    float n; cin >> n;
    if (n >= 0 && n < 90)
    {
        cout << "first quadrant\n";
    }
    else if (n >= 90 && n < 180)
    {
        cout << "second quadrant\n";
    }
    else if (n >= 180 && n < 270)
    {
        cout << "third quadrant\n";
    }
    else if (n >= 270 && n < 360)
    {
        cout << "fourth quadrant\n";
    }
    else
    {
        cout << "not exist\n";
    }
    return 0;
}