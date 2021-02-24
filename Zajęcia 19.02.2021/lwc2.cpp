#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[1000][2];
    long long f, cc = 0;
    for (int i = 0; i < 1000; i++) cin >> tab[i][0];
    for (int i = 0; i < 999; i++) tab[i][1] = abs(tab[i + 1][0] - tab[i][0]);
    for (int i = 0; i < 999; i++)
    {
        int c = 1, pos = i;
        while (tab[pos][1] == tab[pos+1][1]) c++, pos++;
        if (c > cc) f = i, cc = c;
        i = pos;
    }
    cout << cc+1 << endl << tab[f][0] << endl << tab[f + cc][0];
    return 0;
}
