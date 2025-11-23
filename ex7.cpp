#include <iostream>

using namespace std;

int func(int x);
int sfunc(int x);

int main()
{
    cout << "count : ";
    int count, value, svalue; cin >> count;
    for (int i = 1; i <= count; i++)
    {
        value = func(i);
        svalue = sfunc(i);
        cout << i << "\t" << value << "\t" << svalue <<endl;
    }
    return 0;
}

int func(int x)
{
    int sum = 100;
    sum += x;
    return sum;
}

int sfunc(int x)
{
    static int sum = 100;
    sum += x;
    return sum;
}