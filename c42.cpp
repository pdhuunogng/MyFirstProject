#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5 && ++i; ++i) 
    {
        cout << i;
    }
    return 0;
}