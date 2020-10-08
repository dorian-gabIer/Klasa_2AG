#include <bits/stdc++.h>
using namespace std;
int counter(string n, char a)
{
    int c = 0;
    for(int i = 0; i < n.size(); i++) if(n[i] == a) c++;
    return c;
}
int main()
{
    string n;
    getline(cin, n);
    set <char> used;
    for(int i = 0; i < n.size(); i++)
    {
        if(used.find(n[i]) == used.end()) if(int(n[i]) != 32) cout << n[i] << " " << counter(n, n[i]) << endl;
        used.insert(n[i]);
    }
    return 0;
}
