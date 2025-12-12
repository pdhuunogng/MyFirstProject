//function: int maximum(int a[], int size) -> print max of array
#include <iostream>
 
using namespace std;

int maximum(int a[], int size);

int main()
{
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "maximum = " << maximum(a, n) <<endl;
    return 0;
}

int maximum(int a[], int size)
{
    int max = INT_MIN;
    for (int b = 0; b < size; b++)
    {
        if(a[b] > max)
            max = a[b];
    }
    return max;
}