/*
Write a program that asks the user to type two integers A and B ( -100000 ≤ A, B ≤100000) 
and exchange the value of A and B. The program should display the new value of A and B.
*/

#include<iostream>

using namespace std;
int main()
{
    int A, B; cin >> A >> B;
    int tmp = A;
    A = B;
    B = tmp;
    cout << A << " " << B;
    return 0;
}