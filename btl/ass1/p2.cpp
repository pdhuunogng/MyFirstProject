#include <iostream>

using namespace std;

int main()
{
    int hasTalisman, demonPresence;
    char timeOfDay;
    cin >> hasTalisman >> timeOfDay >> demonPresence;

    cout << "[Scene 2] ";
    if (hasTalisman == 0)
        cout << "Denied: No talisman.\n";
    else if (timeOfDay != 'D' && timeOfDay != 'N')
        cout << "Warning: invalid timeOfDay.\n";
    else if (timeOfDay == 'N' && demonPresence == 1)
        cout << "Open silently.\n";
    else
        cout << "Open cautiously.\n";

    return 0;
}