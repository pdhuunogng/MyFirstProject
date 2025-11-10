#include <iostream>
//in ra tam giac so - tam giac vuong trai
using namespace std;

int main()
{
    cout << "nhap n: ";
    int n; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout <<endl;
    }
    return 0;
}