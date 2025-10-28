/*here are many ways to calculate the distance between A and B.

Below are 2 ways to calculate the distance between point A and point B

Manhattan distance: |xA−xB|+|yA−yB|
Euclidean distance: (xA−xB)2+(yA−yB)2−−−−−−−−−−−−−−−−−−−√
Write and run a program that reads the coordinate of 2 points, A and B, from the

keyboard and then displays the distance between A and B in 2 ways: Manhattan distance and Euclidean distance.

When printing the distance using Euclidean distance, please round up to 2 digits after decimal by using this formula:

cout<<fixed<<setprecision(2)<< ...;
Input:
The first line contains the coordinate of point A
The second line contains the coordinate of point B
Coordinate of point A and point B are integer
−100000≤xA,yA,xB,yB≤100000

Hint: You can use abs(), sqrt() function*/

#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x1, y1; cin >> x1 >> y1;
    int x2, y2; cin >> x2 >> y2;

    int d1 = x1 - x2;
    int d2 = y1 - y2;
    cout << "Manhattan distance: " << abs(d1) + abs(d2) <<endl;
    cout << fixed << setprecision(2) <<"Euclidean distance: " << sqrt(d1*d1 + d2*d2) <<endl;
    return 0;
}