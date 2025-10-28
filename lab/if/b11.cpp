#include <iostream>

using namespace std;

int main()
{
    float a; cin >> a;
    if (a >= 90 && a <= 100)
    {
        cout << 'A' <<endl;
    }
    else if (a >= 80 && a < 90)
    {
        cout << 'B' <<endl;
    }
    else if (a >= 70 && a < 80)
    {
        cout << 'C' <<endl;
    }
    else if (a >= 60 && a < 70)
    {
        cout << 'D' <<endl;
    }
    else if (a >= 0 && a <60)
    {
        cout << 'F' <<endl;
    }
    else
    {
        cout << "Grade is not exist\n ";
    }
    return 0;
}