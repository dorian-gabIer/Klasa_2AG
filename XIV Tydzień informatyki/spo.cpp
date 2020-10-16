#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0, max = 0;
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i++) cin >> tab[i];
    sort(tab, tab+n);
    for(int i = 0; i < n-1; i++)
    {
        if(tab[i] == tab[i+1] || tab[i+1] - tab[i] == 1) count++;
        else
        {
            if(max < count) max = count;
            count = 0;
        }
    }
    cout << max+1;
    return 0;
}
