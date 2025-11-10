#include <iostream>
#include <iomanip>
//lap bang cuu chuong R x C
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    for (int i = 1; i <= c; i++)
    {
        cout << "|";
        for (int j = 1; j <= r; j++)
        {
            cout <<setw(4) << i*j;
            cout <<"|";
        }
        cout <<endl;
    }
    return 0;
}