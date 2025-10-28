/*Write and run a program that reads an integer n (-1000000 ≤ n ≤ 1000000) from the keyboard and displays whether the number is odd or not? You MUST NOT use IF statement.*/

#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
    int n; cin >> n;
    int a = n%2;
    cout << (a & 1 ? "Odd" : "Even"); // a & 1 là lấy bit cuối cùng của a (binary)
    return 0;
}