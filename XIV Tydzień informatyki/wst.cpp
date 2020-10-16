#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, min = INT_MAX, roznica, fromleft = 0, sum = 0, fromright = 0;
    cin >> n;
    int tab[n] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < n-2; i++)
    {
        fromleft += tab[i];
        fromright = accumulate(tab + i + 1, tab+n, fromright);
        roznica = abs(fromleft - fromright);
        fromright = 0;
        if(roznica < min) min = roznica;
    }
    cout << min;
    return 0;
}
