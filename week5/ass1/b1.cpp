#include <iostream>

using namespace std;

int main()
{
    int straw = 5, mat = 3, dubai = 10;
    int pstraw = 20000, pmat = 30000, pdubai = 50000;
    int choco = straw + mat + dubai;
    int price = straw * pstraw + mat * pmat + dubai * pdubai;
    cout << "Total chocolates: " << choco << endl;
    cout << "Total value (VND): " << price << endl;
    return 0; 
}