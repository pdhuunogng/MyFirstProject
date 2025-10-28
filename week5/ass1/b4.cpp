#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float mid = 7.0, lab = 10.0, fin = 9.0;
    float wMid = 0.3, wLab = 0.2, wFin = 0.5;
    float avg = mid * wMid + lab * wLab + fin * wFin;
    cout << "Average score = " << fixed << setprecision(2) << avg <<endl;
    return 0;
}