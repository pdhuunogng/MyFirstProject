// function: int linearSearch(int a[], int size, int key) -> return location of key in array, return -1 if cannot find
#include <iostream>

using namespace std;

int linearSearch(int a[], int size, int key);

int main()
{
    int n; cin >> n;
    int key; cin >> key;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "location of " << key << ": " << linearSearch(a, n, key) <<endl;
    return 0;
}

int linearSearch(int a[], int size, int key)
{
    for (int b = 0; b < size; b++)
    {
        if(a[b] == key)
            return b+1;
    }
    return -1;
}