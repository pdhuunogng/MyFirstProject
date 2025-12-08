#include <iostream>
#include <cmath>
#include <iomanip>
// giải phương trình bậc 2, có nghiệm thực
using namespace std;

int main()
{
    double a, b, c, x1, x2, del, real, image;
    cin >> a >> b >> c;
    del = b*b - 4*a*c;
    if (a == 0)
    {
        if(b == 0 )
        {
            if (c == 0)
            {
                cout << "Countless solutions" <<endl;
            }
            else 
            {
                cout << "No solution" <<endl;
            }
        }
        else
        {
            if(c == 0)
            {
                cout << 0 <<endl;
            }
            else
            {
                x1 = (-c)/b;
                cout << fixed <<setprecision(4) << x1 <<endl;
            }
        }
    }
    else
    {
        if (del > 0 )
        {
            x1 = (-b + sqrt(del))/(a*2);
            x2 = (-b - sqrt(del))/(a*2);
            cout << fixed <<setprecision(4);
            cout << x1 <<endl;
            cout << x2 <<endl;
        }
        else if (del == 0)
        {
            x1 = (-b)/(a*2);
            cout << fixed <<setprecision(4);
            cout << x1 <<endl;
        }
        else
        {
            real = -b / (2 * a);
            image = sqrt(-del) / (2 * a);
            cout <<fixed <<setprecision(4);
            cout << real<< " + " << image << "*i" << endl;
            cout << real << " - " << image << "*i"<<endl;
        }
    }
    return 0;
}