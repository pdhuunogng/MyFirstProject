#include <iostream>

using namespace std;

int main()
{
    int a = 2, b = 0, c = 2, d = 5;
    {
        int a1 = a + 4; // a1 = 2 + 4 = 6
        int b1 = b - a; // b1 = 0 - 6 = -6
        int c1 = c + a + b; // c1 = 2 + 6 - 6 = 2
        cout << "a1 = " << a1 <<endl;
        cout << "b1 = " << b1 <<endl;
        cout << "c1 = " << c1 <<endl;
    }
    {
        int a2 = a;
        int a3 = ++a;
        int a4 = a++;
        cout << "a = " << a2 << "    ++a = " << a3 << "    a++ = " << a4 <<endl;
    // a = 2, ++a = 3, a++ = 3 (print a = 3 -> a += 1 -> a = 4)
    }
    a = 2;
    {
        int c2 = a + b; // c = 2 + 0 = 2
        int c3 = ++a + ++b; // a = 3, b = 1; c = 3 + 1 = 4
        int c4 = a-- + b--; // c = 4; a = 2, b = 0
        int c5 = --a + b++; // a = 1; c = 1 + 0 = 1; b = 1
        cout << "c2 = " << c2 << "  c3 = " << c3 << "   c4 = " << c4 << "   c5 = " << c5 <<endl;
    }
    a = 2, b = 0;
    {
        int c6 = (++a) * (b--) + c++;
        // a = 3; c6 = 3 * 0 + 2 = 2; b = -1, c = 3
        cout << "c = (++a) * (b--) + c++ = " << c6 <<endl;
    }
    a = 2, b = 0, c = 2;
    {
        int d1 = (a++ * ++b) - (--c);
        // b = 1, c = 1; d = 2*1 - 1 = 1; a = 3;
        cout << "d = (a++ * ++b) - (--c) = " << d1 <<endl;
    }
    a = 2, b = 0, c = 2;
    {
        cout << "(a++)-- = error" <<endl;
        cout << "++(a++) = error" <<endl;
    }
    {
        int d = (a++) + (a++);
        // d = 2 + 3 = 5; a = 4
        cout << "d = " << d << " a = " << a <<endl;
    }
    a = 2;
    {
       cout <<"const int a = 3; a++; -> error" <<endl; 
    }
    {
        c = 0;
        int e = (c += 3) * (c += 4);
        // d = 3 * 7 = 21;
        // d = 7 * 4 = 28;
        //d = 7 * 7 = 49; song song
        cout << "c = 0; d = (c += 3) * (c += 4) = " << e <<endl;
    }
    return 0;
}