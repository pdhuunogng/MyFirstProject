#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

//function 
string lower(string a);
bool vow_checked(char b);
bool cons_checked(char f);
string vow_1_pron(char e);
string cons_pron(string s, size_t x);
bool vow_pair_checked(string y, size_t z);
bool pair_haw(string v);
string vow_pair_pron(string r);

int main()
{
    //input
    string haw; getline(cin,haw);

    //upper -> lowercase
    string haw_lw = lower(haw);

    //check valid-invalid
    for (size_t i = 0; i < haw_lw.length() ; i++)
    {
        if (!vow_checked(haw_lw[i]) && !cons_checked(haw_lw[i]) && (haw_lw[i] != '\'') && (haw_lw[i] != ' '))
        {
            cout << haw << " contains invalid characters.\n";
            return 0;
        }    
    }

    //convert hawaii -> english
    string conv;
    for (size_t j = 0; j < haw_lw.length(); j++)
    {
        char d = haw_lw[j];
        if(vow_pair_checked(haw_lw, j))
        {
            string pair;
            pair.push_back(haw_lw[j]);
            pair.push_back(haw_lw[j + 1]);
            conv += vow_pair_pron(pair);
            conv += "-";
            j++;
        }
        else if(vow_checked(d))
        {
            conv += vow_1_pron(d);
            conv += "-";
        }
        else if (cons_checked(d))
        {
            conv += cons_pron(haw_lw, j);
        }
        else if(d == '\'')
        {
            //if -' -> '
            if (!conv.empty() && conv.back() == '-')
                conv.pop_back();
            conv += "\'";
        }
        else if(d == ' ')
        {
            //if -_ -> _
            if(!conv.empty() && conv.back() == '-')
                conv.pop_back();
            conv += " ";
        }
    }

    //if end- -> end
    if(!conv.empty() && conv.back() == '-')
        conv.pop_back();

    cout << conv <<endl;
    return 0;
    
}










//function
//convert upper -> lower
string lower(string a)
{
    size_t len = a.length();
    for (size_t i = 0; i < len; i++)
    {
        char c = a[i];
        if(c == '\'')
            continue;
        if (c >= 'A' && c <= 'Z')
            a[i] = c - 'A' + 'a'; 
    }
    return a;
}

//check vowel
bool vow_checked(char b)
{
    return (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u');
}

//pronounce vowel
string vow_1_pron(char e)
{
    switch(e)
    {
        case 'a': return "ah";
        case 'e': return "eh";
        case 'i': return "ee";
        case 'o': return "oh";
        case 'u': return "oo";
    }
    return "";
}

//check consonant
bool cons_checked(char f)
{
    return (f == 'h' || f == 'k' || f == 'l' || f == 'm' || f == 'n' || f == 'p' || f == 'w');
}

//pronounce consonant 
string cons_pron(string s, size_t x)
{
    char d = s[x];
    switch(d)
    {
        case 'p': return "p";
        case 'k': return "k";
        case 'h': return "h";
        case 'l': return "l";
        case 'm': return "m";
        case 'n': return "n";
        case 'w':
            if(x == 0 || s[x - 1] == 'a' || s[x - 1] == 'u' || s[x - 1] == 'o' || s[x - 1] == ' ')
                return "w";
            else if (s[x - 1] == 'i' || s[x - 1] == 'e')
                return "v";
            else
                return "w";
    }
    return "";
}

//check vowel pair
bool vow_pair_checked(string y, size_t z)
{
    char g = y[z];
    string y_;
    y_ += g;
    if(vow_checked(g))
    {
        if(z == (y.length() - 1))
            return false;
        else
        {
            char f = y[z + 1];
            if(vow_checked(f))
            {
                y_ += f;
                if(pair_haw(y_))
                    return true;
            }
        }
    }
    return false;
}

//check vowel pair in hawaii
bool pair_haw(string v)
{
    if(v == "ai" || v == "ae" || v == "ao" || v == "au" || v == "ei" || v == "eu" 
        || v == "iu" || v == "oi" || v == "ou" || v == "ui")
        return true;
    return false;
}

//pronounce vowel pair 
string vow_pair_pron(string r)
{
    char r1 = r[0];
    char r2 = r[1];
    switch(r1)
    {
        case 'a': 
            switch(r2)
            {
                case 'i': return "eye";
                case 'e': return "eye";
                case 'o': return "ow";
                case 'u': return "ow";
            }
            break;
        case 'e':
            switch(r2)
            {
                case 'i': return "ay";
                case 'u': return "eh-oo";
            }
            break;
        case 'i': return "ew";
            break;
        case 'o':
            switch(r2)
            {
                case 'i': return "oy";
                case 'u': return "ow";
            }
            break;
        case 'u': return "ooey";
            break;
    }
    return "";
}