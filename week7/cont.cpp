#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int grade;
    while (count < 30)
    {
        cout << "enter a grade: ";
        cin >> grade;
        if (grade < 0 || grade > 100)
            continue; //bat dau vong lap tiep theo
        count++;
    }
}