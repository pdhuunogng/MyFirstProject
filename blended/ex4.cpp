#include <iostream>
//đảo ngược số 
using namespace std;

int main()
{
    cout << "Enter an integer between -10000 and 10000: ";
    int n; cin >> n;

    int conv = 0;
    while (n != 0)
    {
        conv = conv*10 + n%10;
        n /= 10;
    }

    cout << "Reversed number: " << conv <<endl;
}