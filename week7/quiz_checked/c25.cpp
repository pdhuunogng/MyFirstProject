#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 2; ++i)
    {
        for (int j = i; j <= 3; ++j)
        {
            sum += i * j;
        }
    }
    cout << sum;
    return 0;
}