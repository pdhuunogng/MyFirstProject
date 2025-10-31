#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2)
            {
                continue;
            }
            if (i == 3 && j == 3)
            {
                break;
            }
            result += i + j;
            cout << "(x , y) = " << "(" << i << "," << j << ")" <<endl;
            cout << result <<endl;
        }
    }
    cout << "done\n";
    return 0;
}