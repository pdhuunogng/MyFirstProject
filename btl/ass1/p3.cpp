#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int demonRank, allyCount;
    double swordSharpness;
    cin >> demonRank >> swordSharpness >> allyCount;
    double adv = (101 - demonRank*15) + (swordSharpness*0.4) + (allyCount*5);
    int b = adv;

    cout << "[Scene 3] ";
    if (b >= 100)
        cout << "Engage head-on ";
    else if (b >= 60 && b <100)
        cout << "Harass and probe ";
    else
        cout << "Retreat and regroup ";
    
    cout <<fixed <<setprecision(1);
    cout << "(adv = " << adv << ")\n";

    return 0;
}
