#include <iostream>
/*
Viết một chương trình C++ để tìm giá trị sau khi đảo ngược thứ tự các chữ số của một số. Ví dụ 123 là kết quả của quá trình đảo ngược thứ tự các chữ số của 321.
Đầu vào: Một số nguyên n kiểu int
Đầu ra: Hàm reverseNum sẽ trả về số thỏa yêu cầu bài toán
*/
using namespace std;

int reverseNum(int n)
{
   int conv = 0;
   while (n > 0)
   {
    conv = conv*10 + n%10;
    n /= 10;
   }
   return conv;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverseNum(n);
    return 0;
}