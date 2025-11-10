#include <iostream>
//in ra ban co caro
using namespace std;

int main()
{
    cout << "nhap n: ";
    int n; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i+j)%2 == 0)
                cout << "#";
            else
                cout << ".";
        }
        cout <<endl;
    }
    return 0;
}