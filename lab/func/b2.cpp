#include <iostream>
/*
Viết một chương trình C++ để tìm lập phương của một số.
Đầu vào: Một số nguyên dương n (1 ≤ n ≤ 1000)
Đầu ra: Hàm cube sẽ trả về giá trị lập phương của n.
Lưu ý: Sinh viên chỉ cần hoàn thiện hàm cube
*/
using namespace std;

int cube(int num)
{
    return num * num * num;
}
int main()
{
    int num;
    int c;
    //Inputting number from user
    cout<<"Enter any number: "<<endl;
    cin>>num;
    c = cube(num);
    cout<<"Cube of " <<num << " is "<<c;
    return 0;
}