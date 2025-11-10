#include <iostream>
// In 1 -> n, moi so 1 dong
using namespace std;

int main()
{
    int n; cin >> n;
    int i = 1;
    do
    {
        cout << i <<endl;
        i++;
    }
    while (i <= n);
    return 0;
}