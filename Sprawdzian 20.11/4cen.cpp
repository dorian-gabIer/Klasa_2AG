#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, newstr;
    int p;
    getline(cin, str);
    cin >> p;
    str.erase(str.end() - 1);
    for(int i = 0; i < str.size(); i++)
    {
        int c = str[i];
        c += p;
        str[i] = c;
    }
    cout << str;
    return 0;
}
