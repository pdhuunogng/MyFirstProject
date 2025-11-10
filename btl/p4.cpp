#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int bossHP, totalDamage, specialMoveReady;
    cin >> bossHP >> totalDamage >> specialMoveReady;
    
    int finalHP = bossHP - totalDamage;

    cout << "[Scene 4] ";
    if (finalHP <= 0)
        cout << "Boss defeated! (finalHP = 0)\n";
    else if (finalHP > 0 && finalHP <= 50 && specialMoveReady == 1)
    {
        cout << "Use special move to finish! ";
        cout << "(finalHP = " << finalHP << ")\n";
    }
    else
    {
        cout << "Withdraw to heal.\n";
        cout << "(finalHP = " << finalHP << ")\n";
    }

    return 0;
}