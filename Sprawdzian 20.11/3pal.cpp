#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string old = s;
    reverse(s.begin(), s.end());
    if(s == old) cout << "TAK";
    else cout << "NIE";
    return 0;
}
