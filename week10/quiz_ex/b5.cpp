// recursive function: long long factorial(int n) -> return n! (0! = 1, 0 <= n <= 10)
// in main(): read n, print n! 
#include <iostream>

using namespace std;

long long factorial(int a);

int main()
{
    int n; cin >> n;
    cout << factorial(n) <<endl;
    return 0;
}

long long factorial(int a)
{
    if(a == 0 || a == 1)
        return 1;
    else
        return a*factorial(a-1);
}