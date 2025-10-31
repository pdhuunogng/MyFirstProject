#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int result = 0;
    while (i<=3)
    {
        int j = 3;
        while (j>=1)
        {
            if (j == 2)
                break; //xuong toi i++
            result += i*j; // += i*3
            j--;
        }
        i++;
    }
    cout << "final result: " << result <<endl;
    return 0;
}