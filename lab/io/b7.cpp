/*
Write and run a program that reads the name, age, sex, height and weight of a student
and displays with proper heading for each variable.
Given that type of name and sex is string, type of age and weight is int, type of height is float.
*/

#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
    string a, s;
    int age, w;
    float h;
    cin >> a >> age >> s >> h >> w;
    cout << "Name: " << a <<endl;
    cout << "Age: " << age <<endl;
    cout << "Sex: " << s <<endl;
    cout << "Height: " << h <<endl;
    cout << "Weight: " << w <<endl;
    return 0;
}