#include <iostream>
/*
Write a program that inputs a square integer matrix of order n and transposes it and then prints it out. 
Transposing a square matrix means: aij↔aji for all i,j. n should be an input parameter.
Input:
The first line contains integer n, n >= 1
For the next n line, each line contains n integer numbers, separated by 1 space character
Output:
The transpose of the input matrix. n row: each row includes n values of that row, seperated by 1 space character, 
newline character after last value
Note: 
No newline after last value of the last row
You should store the input matrix in a 2-dimensional array
*/

using namespace std;

int main()
{
    int n; cin >> n;
    int num[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num[i][j];
        }
    }

    //swap
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // int i = 0 là swap 2 lần -> về lại ban đầu 
        {
            int tmp = num[i][j];
            num[i][j] = num[j][i];
            num[j][i] = tmp;
        }
    }

    //input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num[i][j];
            cout << " ";
        }
        cout <<endl;
    }

    return 0;
}