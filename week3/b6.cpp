#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    for (int i = 1; i <= 100; i++)
    {
        a = a + (i*i);
    }
    cout << "tong binh phuong tu 1 -> 100 = " << a <<endl;
    return 0;
}