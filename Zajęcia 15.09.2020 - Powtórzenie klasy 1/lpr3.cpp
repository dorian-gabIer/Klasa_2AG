#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[2000], roz = 0;
    vector <int> pary;
    for(int i = 0; i < 2000; i++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < 1999; i++)
    {
        if((tab[i] == tab[i+1] - 2) or (tab[i+1] == tab[i] - 2))
        {
            pary.push_back(tab[i]);
            pary.push_back(tab[i+1]);
            roz++;
        }
    }
    cout << roz << endl;
    for(int i = 0; i < pary.size(); i += 2)
    {
        cout << pary[i] << " " << pary[i+1] << endl;
    }
    return 0;
}
