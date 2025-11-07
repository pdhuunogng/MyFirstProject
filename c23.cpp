#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 2; ++i) 
    {
        for (int j = 1; j <= 3; ++j) 
        {
            if ((i + j) % 2 == 0) 
                continue;
            cout << i + j << " ";
        }
    }
    return 0;
}