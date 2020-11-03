#include <bits/stdc++.h>
using namespace std;
string bigchange(string s)
{
    string res;
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
        if(s[i] != 32 && s[i] != ',' && s[i] != '.')
        {
            if(s[i] == 'J') res += 'I';
            else res += s[i];
        }
    }
    return res;
}
int main()
{
    string s;
    getline(cin, s);
    cout << bigchange(s);
    return 0;
}
