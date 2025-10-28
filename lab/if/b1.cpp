#include <iostream>

using namespace std;

int main(){
int a; float b; 
cin >> a >> b;

if (a == 1) //F to C
{
    cout << (5.0/9) * (b - 32) <<endl;
}
else if (a == 2) //C to F
{
    cout << (9.0/5) * b + 32 <<endl;
}
else if ( a == 3)
{
    return 0;
}
else
{
    cout << "Invalid option" <<endl;
}
return 0;
}