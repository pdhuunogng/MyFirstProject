#include <iostream>

using namespace std;

int main()
{
    int cnt = 0, i = 1;
    for (;;) 
    {
        i *= 2;
        if (i % 3 == 0) 
            continue;
        cnt++;
        if (i > 16) 
        break;
    }
    cout << cnt;
    return 0;
}