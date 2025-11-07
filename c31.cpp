#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    do 
    {
        cout << x << " ";
        x -= 3;
    } 
    while (x > 5);
    return 0;
}