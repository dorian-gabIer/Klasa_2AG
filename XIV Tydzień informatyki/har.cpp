#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0, min = 1000001;
    cin >> n >> k;
    int tab[n] = {};
    for(int i = 0; i < n; i++) cin >> tab[i];
    for(int i = 0; i < n; i++)
    {
        if(tab[i] == 0)
        {
            int c = 0, d = 0, j = i;
            while(n > j && k > d)
            {
                if(tab[j] == 1) c++;
                else d++;
                j++;
            }
            if(j==n && k > d) break;
            else if(min > c) min = c;
        }
    }
    if(min == 1000001) cout << "NIE";
    else cout << min;
    return 0;
}
