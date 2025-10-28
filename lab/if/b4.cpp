#include <iostream>

using namespace std;

int main()
{
    char a; cin >> a;
    if (a == 'M' || a == 'm')
    {
        cout << "Individual is married\n";
    }
    else if (a == 'D' || a == 'd')
    {
        cout << "Individual is divorced\n";
    }
    else if (a == 'W' || a == 'w')
    {
        cout << "Individual is widowed\n";
    }
    else
    {
        cout << "An invalid code was entered\n";
    }
    return 0;
}