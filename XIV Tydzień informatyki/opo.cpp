#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int zdl = m-1, zdr = n-m;
    int w[n] = {};
    int z[n] = {};
    for(int i = 0; i < n; i++) cin >> w[i] >> z[i];
    for(int i = m-2; i >= 0; i--)
    {
        if(w[m-1] >= z[i] or z[m-1] <= w[i]) zdl--;
        else break;
    }
    for(int i = m; i < n; i++)
    {
        if(w[m-1] >= z[i] or z[m-1] <= w[i]) zdr--;
        else break;
    }
    cout << min(zdl, zdr);
    return 0;
}
