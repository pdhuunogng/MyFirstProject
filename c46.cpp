#include <iostream>

using namespace std;

int main()
{
    int prints = 0;
    for (int i = 0; i < 4; ++i) 
    {
        for (int j = 0; j < 4; ++j) 
        {
            if (j == 1) 
                break;
            cout << "inner ";
        }
    cout << "outer ";
    prints++;
    }
    cout << prints;
    return 0;
}