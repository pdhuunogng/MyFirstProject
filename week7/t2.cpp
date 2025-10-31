#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    start: 
    cout <<"i = " << i <<endl;
    ++i;

    if (i <= 5)
        goto start; // len lai dong start
    
    cout << "ended at i = " << i <<endl; // i > 5, i = 6
    return 0;
}