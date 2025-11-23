#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Dogs";//dogs -> s1 bigger
    string s2 = "Dog";
    if (s1 < s2)
        cout << "s1 smaller";
    else 
        cout << "s1 not smaller";
}