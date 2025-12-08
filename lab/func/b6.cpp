#include <iostream>
#include <cmath>
/*
Viết một chương trình C++ để in tất cả các số nguyên tố trong một khoảng [lower, upper] cho trước
Đầu vào: 2 số nguyên lower, upper (0 ≤ lower, upper ≤ 1000)
Đầu ra: Các số nguyên tố trong khoảng [lower, upper]. Mỗi số nguyên tố cách nhau một khoảng trắng. 
*/
using namespace std;

void printPrimes(int lower, int upper)
{ 
    if (lower < 2)
        lower = 2;
    if (upper < 2)
        return;
    for (int i = lower; i <= upper; i++)
        {
            bool prime = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i%j == 0)
                    prime = false;
                    break;
            }
        if (prime)
            cout << i << " "; 
        }
}
int main()
{
    int lower, upper;
    cin>>lower;
    cin>>upper;
    // Calling function to print all primes between the given range.
    printPrimes(lower, upper);
    return 0;
}