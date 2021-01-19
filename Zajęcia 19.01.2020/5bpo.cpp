#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map <char, int> mapka;
    set <char> literki;
    cin >> str;
    for(int i = 0; i < str.size(); i++) mapka[str[i]]++;
    for(int i = 0; i < str.size(); i++) 
    {
        if(mapka[str[i]] % 2 != 0 && literki.find(str[i]) == literki.end()) cout << str[i];
        literki.insert(str[i]);
    }
    return 0;
}
