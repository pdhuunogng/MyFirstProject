#include <iostream>
//kiem tra ma tran co doi xung hay khong
//symmetric matrix -> A(transpose) = A
using namespace std;

int main()
{
    const int N = 3;
    int i,j;
    int a[N][N];
    bool symmetric = true;

    //input
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }

    //check
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }
        }
    if (!symmetric)
        break;
    }

    //output
    if(symmetric)
        cout << "The matrix is symmetric\n";
    else
        cout << "The matrix is not symmetric\n";
    
    return 0;
}