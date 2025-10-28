#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main()
{
    cout << "1" <<endl;
    cout << "2  3" <<endl;
    cout << "4  5   6" <<endl;
    cout << "7  8   9   10" <<endl;
    
    string name;
    string age;
    cout << "Your name is: ";
    cin >> name;
    cout << "Your age is: ";
    cin >> age;
    cout <<endl;
    cout <<setfill('*') << setw(20) << "" <<endl;
    cout << "*" << setfill(' ') << left << setw(18) << "Name: " + name << "*" <<endl;
    cout << "*" << setfill(' ') << left << setw(18) << "Name: " + age << "*" <<endl;
    cout <<setfill('*') << setw(20) << "" <<endl;

    float a;
    cout << "Input your number: ";
    cin >> a;
    for (int i = 1; i <= 4; i++)
    {
        cout << setfill(' ') << setw((4 - i)*2) <<"";
        for (int j = 1; j <= i; j++)
        {
            cout << fixed << setprecision(1) << a;
            if (j < i)
            {
                cout << " ";
            }
        }
        cout <<endl;
    }
    return 0;
}