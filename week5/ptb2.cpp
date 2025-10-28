#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,x1,x2,del;
    cout << "Nhap a b c: ";
    cin >> a >> b >> c;
    del = pow(b,2)-4*a*c;
    if (del > 0 )
    {
        x1 = (-b + sqrt(del))/(a*2);
        x2 = (-b - sqrt(del))/(a*2);
        cout << "Phuong trinh co 2 nghiem phan biet: x1 = "<< x1 << ", x2 = "<< x2 <<endl;
    }
    else if (del == 0)
    {
        x1 = (-b)/(a*2);
        cout << "Phuong trinh co nghiem kep x = " << x1 <<endl;
    }
    else
    {
        cout << "Phuong trinh vo nghiem." <<endl;
    }
    return 0;
}