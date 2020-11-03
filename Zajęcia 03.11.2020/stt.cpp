#include <bits/stdc++.h>
using namespace std;
int main()
{
    string base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", inp, inp2, inp3;
    set <char> present;
    cin >> inp;
    for(int i = 0; i < 26; i++) if(inp.find(base[i]) == string::npos && inp.find(tolower(base[i])) == string::npos) cout << base[i];
    for(int i = 0; i < inp.size(); i++) inp2 += toupper(inp[i]);
    for(int i = 0; i < inp2.size(); i++) 
    {
        if(present.find(toupper(inp[i])) == present.end()) inp3 += toupper(inp[i]);
        present.insert(toupper(inp[i]));
    }
    cout << endl << inp3;
    return 0;
}
