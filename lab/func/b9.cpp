#include<iostream>
/*
Viết một chương trình C++ để tính giá trị bình phương của một số nguyên.
Đầu vào: Một số nguyên n ( - 10 000 ≤ n ≤ 10 000)
Đẩu ra: Hàm square trả về kết quả là bình phương của số nguyên n
*/
using namespace std;

long long square(long long n)
{
   return n*n;
}
int main()
{
    long long n;
    cin>>n;
    cout<<square(n);
    return 0;
}