#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap so diem: ";
    int N; cin >> N;
    float a[N-1];
    float sum = 0;

    for (int i = 0; i <= (N-1); i++)
    {
        cout << "Nhap diem " << (i+1) << ": ";
        cin >> a[i];
        sum += a[i];
    }

    cout << "diem trung binh: "<< (sum*1.0)/N <<endl;
    return 0;
}