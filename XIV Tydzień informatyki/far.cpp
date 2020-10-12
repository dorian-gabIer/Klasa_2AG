#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0, p, q, r;
    cin >> n;
    int tab[n] = {};
    while(1)
    {
        cin >> p >> q >> r;
        if(p == 0 && q == 0 && r == 0) break;
        for(int i = p-1; i < q; i++) if(tab[i] < r) tab[i] = r;

    }
    for(int i = 0; i < n; i++)
    {
        sum += tab[i];
    }
    cout << sum;
    return 0;
}
