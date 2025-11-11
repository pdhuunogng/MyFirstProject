#include <iostream>
#include <iomanip>
/*Write a program that stores the following hourly rates in an array name hourlyRates:  9.5, 6.4, 12.5, 5.5, 10.5. Your program should also create two arrays named workingHours and wages, each capable of storing five double-precision numbers. Using a for loop and a cin statement, have your program accept five user-input numbers into workingHours array when the program is run. Your program should store the product of the corresponding values in the hourlyRates and workingHours arrays in the wages array (for example, wages[1] = hourlyRates[1]*workingHours[1]) and display the output as a table consisting of three columns.

Input: 

5 double-precision numbers
Output: Use the following format: 
3 columns, each column separate from the next to the right by exactly 30 characters, starting with the value and space characters to fill the rest, no space character and 1 newline character after last value of line
The first line will be the name of each column, respectively: Hourly Rate, Working Hour, Wage
Output value is rounded up to 10 digits after decimal point
No newline character after the last value of the last line
*/
using namespace std;

int main()
{
    //khai báo input
    double hourlyRates[] = {9.5, 6.4, 12.5, 5.5, 10.5};
    double workingHours[5], wages[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> workingHours[i];
        wages[i] = hourlyRates[i] * workingHours[i];
    }
    //định dạng output
    cout << fixed << setprecision(10);
    cout << left << setw(30) << "Hourly Rate" << setw(30) 
            << "Working Hour" << setw(30) << "Wage" << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(30) << hourlyRates[i] << setw(30)
            << workingHours[i] << setw(30) << wages[i] <<endl;
    }

    return 0;
}