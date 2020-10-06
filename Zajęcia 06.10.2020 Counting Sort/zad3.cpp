#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int tab[1000];
    for(int i = 0; i < 1000; i++)
    {
        tab[i] = rand()%10 + 1;
    }
    for(int i = 0; i < 1000; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl << endl;
    int tabpom[11];
    int tabsort[1000];
    for(int i = 0; i < 11; i++) tabpom[i] = 0;
    for(int i = 0; i < 1000; i++) ++tabpom[tab[i]];
    for(int i = 1 ; i < 11 ; i++) tabpom[i] += tabpom[i-1];
    for(int i = 999 ; i >= 0 ; --i) tabsort[--tabpom[tab[i]]] = tab[i];
    for(int i = 0; i < 1000; i++)
    {
        cout << tabsort[i] << " ";
    }
}
