#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[100], n, piv, ml = 0, mr = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> tab[i];
    int pivpos = floor(n/2);
    piv = tab[pivpos];
    for (int i = floor(n/2) + 1; i < n; i++) if (piv < tab[i]) mr++;
    for (int i = floor(n/2) - 1; i >= 0; i--) if (piv > tab[i]) ml++;
    cout << ml << " " << mr;
    return 0;
}
