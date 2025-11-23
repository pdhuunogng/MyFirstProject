#include <iostream>
//tìm số lớn 1 và lớn 2
//nhập 1 dãy số, kết thúc khi nhập -1
using namespace std;

int main()
{
    cout << "Enter positive integers (enter -1 to stop): ";
    int n; cin >> n;
    int max1 = 0, max2 = 0;
    while (n != -1)
    {
        cin >> n;
        if (n > max1 && n > max2)
        {
            int tmp = max1;
            max1 = n;
            max2 = tmp;
        }

        else if (n > max2 && n < max1)
        {
            max2 = n;
        }
    }

    cout << "số lớn nhất là: " << max1 <<endl;
    cout << "số lớn nhì là: " << max2 <<endl;

    return 0;
}