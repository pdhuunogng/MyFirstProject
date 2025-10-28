#include<iostream>

using namespace std;
int main()
{
    int a; cin >> a;
    cout << (a & 1 ? "Odd" : "Even");
    return 0;
}