/*Given a function:

F(x)=ax2+bx+c

Write and run a program that performs the following steps:

- Reading the value of a, b and c from the keyboard.

- Solving F(x)=0
 ( assume that the equation has two real distinct solutions x1
 and x2
 ).

- Displaying x1
 and x2
 .

Input: One line contains 3 integers a, b, c (-100 ≤ a, b, c ≤ 100)

Output:  Round up the answer to 2 digits after decimal*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,x1,x2,del;
    cin >> a >> b >> c;
    del = pow(b,2)-4*a*c;
    if (del > 0 )
    {
        x1 = (-b + sqrt(del))/(a*2);
        x2 = (-b - sqrt(del))/(a*2);
        cout <<fixed << setprecision(2);
        cout << "X1= "<< x1 <<endl;
        cout << "X2= "<< x2 <<endl;
    }
    return 0;
}