#include<iostream>
/*
Viết một chương trình C++ để hoán đổi giá trị của 2 biến x, y.
Đầu vào: Hai số nguyên x, y kiểu int
Đầu ra: Sau khi thực thi hàm swap, giá trị của x,y được hoán đổi với nhau
*/
using namespace std;

void swap(int &a, int &b) // tham chiếu tới giá trị gốc

{

    int tmp = a;
    a = b;
    b = tmp;

}

int main()

{

    int x,y;

    cin>>x>>y;

    swap(x,y);

    cout<<x<<" "<<y;

    return 0;

}