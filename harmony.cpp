#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string string_lower(string a);
bool is_vowel(char c);
bool is_cons(char d);
bool is_vowel_pair(char e, string f, size_t g);

int main()
{
    string s;
    getline(cin, s);

    string s_lw = string_lower(s);

    //invalid
    for (size_t x = 0; x < s_lw.size(); x++)
    {
        char y = s_lw[x];
        if (!is_vowel(y) && !is_cons(y) && y != ' ' && y != '\'')
        {
            cout << -1 <<endl;
            return 0;
            break;
        }
    }

    int count = 0;
    for (size_t z = 0; z < s_lw.size(); z++)
    {
        char t = s_lw[z];
        if(is_vowel_pair(t, s_lw, z))
        {
            count += 1;
            ++z;
        }
        else if(is_vowel(t))
            count += 1;
    }
    cout << count <<endl;
    return 0;
}

string string_lower(string a)
{
    string conv;
    for (size_t i = 0; i < a.size(); i++)
    {
        char b = a[i];
        if(b >= 'A' && b <= 'Z')
        {
            conv += b - 'A' + 'a';
        }
        else
            conv += b;
    }
    return conv;
}

bool is_vowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

bool is_cons(char d)
{
    if (d == 'p' || d == 'k' || d == 'h' || d == 'l' || d == 'm' || d == 'n' || d == 'w')
        return true;
    return false;
}

bool is_vowel_pair(char e, string f, size_t g)
{
    if(g+1 == f.size())
        return false;
    else if(is_vowel(e))
    {
        char h = f[g+1];
        if (is_vowel(h))
        {
            string pair;
            pair.push_back(e);
            pair.push_back(h);
            if (pair == "ae" || pair == "ai" || pair == "ao" || pair == "au"
                || pair == "ei" || pair == "eo" || pair == "eu" || pair == "iu" || pair == "oi"
                || pair == "ou" || pair == "ui" )
                return true;
        }
    }
    return false;
}