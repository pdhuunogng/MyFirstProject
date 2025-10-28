#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    int m = 1; //long long m
    for (int i = 1; i <= n ; i++)
    {
        m = m*i;
    }
    cout << "n! = " << m << endl;
    return 0;

}