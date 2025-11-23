#include <iostream>
#include <string>
//chuyển đổi chuỗi -> số nguyên có dấu
//thuật toán atoi
using namespace std;

int main()
{
    cout<< "Nhập chuỗi bất kỳ: ";
    string str;
    getline(cin,str);

    //tính độ dài chuỗi
    int l = str.length();
    //kiểm tra chuỗi
    if (l == 0)
    {
        cout << "số nguyên sau chuyển đổi: 0\n";
        return 0;
    }

    //kí tự dấu
    char sign = '+';
    //số nguyên chuyển đổi
    int conv = 0;

    //loại bỏ khoảng trắng đầu nếu có
    int i = 0;
    while (i < l && str[i] == ' ')
    {
        //loại bỏ
        i++;
        str = str.substr(i);
        
    }

    //check xem có chữ cái đầu không
    int j = 0;
    if (str[0] == '+' || str[0] == '-')
    {
        if (str[0] == '-')
            sign = '-'; 
        j = 1;
    }
    
    //
    while (j < l && str[j] >= '0' && str[j] <= '9')
    {
        conv = conv*10 + (str[j] - '0');
        j++;
    }

    //in kết quả
    cout << "số nguyên sau chuyển đổi: " << sign << conv <<endl;
    return 0;
}