#include<iostream>

using namespace std;

int a = 1;

int main()
{
    int a = 2;
    int b; cin >> b;
    cout << (b & 1 ? "Odd" : "Even"); 
    //check bit cuối của số b có phải là 1 hay không
    return 0;
}