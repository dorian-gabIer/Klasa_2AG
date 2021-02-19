#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[1000], maxdiff = -1, mindiff = INT_MAX;
    for(int i = 0; i < 4; i++) cin >> tab[i];
    for(int i = 0; i < 3; i++)
    {
        if(maxdiff < abs(tab[i+1] - tab[i])) maxdiff = abs(tab[i+1] - tab[i]);
        if(mindiff > abs(tab[i+1] - tab[i])) mindiff = abs(tab[i+1] - tab[i]);
    }
    cout << maxdiff << endl << mindiff;
    return 0;
}
