#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int slayerLevel, hp;
    double breathingMastery;
    cin >> slayerLevel >> hp >> breathingMastery;
    
    double power = (slayerLevel*10) + (hp/(10*1.0)) + (breathingMastery*50);
    int a = power;
    cout << "[Scene 1] Rank: ";
    if(a < 80)
        cout << "Novice";
    else if (a >= 80 && a < 120)
        cout << "Elite";
    else 
        cout << "Hashira";
    cout << fixed << setprecision(1);
    cout << " (power = " << power << ")\n";
    return 0;
}