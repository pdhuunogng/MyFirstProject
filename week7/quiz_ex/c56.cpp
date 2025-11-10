#include <iostream>

using namespace std;

int main()
{
    int h, w;
    cout << "height: ";
    cin >> h;
    cout << "width: ";
    cin >> w;

    for (int i = 1; i <= h; i++)
    {
        if (i == 1 || i == (h))
        {
            for (int j = 1; j <= w; j++)
            {
                cout << "*";
            }
            cout <<endl;
        }
        else
        {
            for (int k = 1; k <= w; k++)
            {
                if (k == 1 || k == (w))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout <<endl;
        } 
    }
    return 0;
}