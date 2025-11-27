#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //khai báo các biến
    int slayerLevel, hp, hasTalisman, demonPresence,
        demonRank, allyCount, bossHP, totalDamage,
        specialMoveReady;
    double breathingMastery, swordSharpness;
    char timeOfDay;

    //nhập input
    cin >> slayerLevel >> hp >> breathingMastery >> hasTalisman 
        >> timeOfDay >> demonPresence >> demonRank >> swordSharpness 
        >> allyCount >> bossHP >> totalDamage >> specialMoveReady;

    //định dạng số thập phân
    cout << fixed << setprecision(1);

    //phân cảnh 1
    double power = slayerLevel*10 + hp/(10*1.0) + breathingMastery*50;
    cout << "[Scene 1] Rank: ";
    if(power < 80)
        cout << "Novice";
    else if (power >= 80 && power < 120)
        cout << "Elite";
    else 
        cout << "Hashira";
    cout << " (power = " << power << ")\n";

    //phân cảnh 2
    cout << "[Scene 2] ";
    if (hasTalisman == 0)
        cout << "Denied: No talisman.\n";
    else if (timeOfDay != 'D' && timeOfDay != 'N')
        cout << "Warning: invalid timeOfDay.\n";
    else if (timeOfDay == 'N' && demonPresence == 1)
        cout << "Open silently.\n";
    else
        cout << "Open cautiously.\n";

    //phân cảnh 3
    double adv = (101 - demonRank*15) + (swordSharpness*0.4) + (allyCount*5);
    cout << "[Scene 3] ";
    if (adv >= 100)
        cout << "Engage head-on ";
    else if (adv >= 60 && adv <100)
        cout << "Harass and probe ";
    else
        cout << "Retreat and regroup ";
    cout << "(adv = " << adv << ")\n";

    //phân cảnh 4
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
        cout << "Withdraw to heal. ";
        cout << "(finalHP = " << finalHP << ")\n";
    }

    //kết thúc chương trình
    return 0;
}