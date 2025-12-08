#include <iostream>
#include <cmath>
#include <string>
/*
Viết một chương trình C++ để chuyển một số nhị phân thành một số thập phân
Đầu vào: Một chuỗi ký tự n là một số nhị phân. Ví dụ "01001"
Đầu ra: Hàm convertBinaryToDecimal trả về giá trị thập phân của số nhị phân vừa truyền vào.
Lưu ý: Sinh viên chỉ hiện thực hàm convertBinaryToDecimal. 
Số thập phân được trả về luôn đảm bảo là một số không âm và nhỏ hơn hoặc bằng 1000
*/
using namespace std;
int convertBinaryToDecimal(string n);

int main()
{
    string n;
    cin >> n;
    cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal";
    return 0;
}

int convertBinaryToDecimal(string n)
{
    int len = n.length();
    int conv = 0;

    for (int i = 0; i < len; i++)
    {
        int a = n[len - 1 - i] - '0';
        conv += a * pow(2,i);
    }

    return conv;
}