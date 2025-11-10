#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    while (i++ < 3) 
    {
        sum += i;
        if (i % 2 == 0) 
            continue;
        sum += ++i;
    }
    cout << " sum - i : " << sum << " - " << i <<endl;
    return 0;
    
}