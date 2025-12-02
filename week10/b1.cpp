#include <iostream>

using namespace std;

int main()
{
    cout << "nhap N: ";
    int N; cin >> N;
    int a[N-1];

    for (int i = 0; i <= (N-1); i++)
    {   
        a[i] = i;
    }
    for (int i = 0; i <= (N-1); i++)
    {   
        cout << a[i] << " ";
    }
    cout <<endl;

    for (int j = (N-1); j >= 0; j--)
    {   
        cout << a[j] << " ";
    }
    cout <<endl;
    return 0;
}