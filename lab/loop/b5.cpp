#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    while (n < 1)
    {
        cin >> n;
    }

    float num[n];
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        if (num[i] >=  0.0)
            pos += 1;
        else
            neg += 1;
    }

    cout << pos << " " << neg <<endl;

    return 0;
}