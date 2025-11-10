#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if ((i + j) % 2 == 1) 
            { 
                n++; 
                break; 
            }
        }
    }
    cout << n;
    return 0;
}   