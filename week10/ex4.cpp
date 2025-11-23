#include <iostream>

using namespace std;

void FindMax(int x, int y);

int main()
{
    cout << "a, b = ";
    int a, b;
    cin >> a >> b;
    FindMax(a,b);
    return 0;
}

void FindMax(int x, int y)
{
    int max = 0;
    if (x >= y)
        max = x;
    else
        max = y;
    cout <<"The maximum of the two numbers is " << max <<endl;
    return; //chấm dứt hàm ngay lập tức 
}