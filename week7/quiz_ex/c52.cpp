#include <iostream>
//in ra hcn *
using namespace std;

int main()
{
    int h, w;
    cout << "Height: ";
    cin >> h;
    cout << "Width: ";
    cin >> w;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}