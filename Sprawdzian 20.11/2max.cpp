#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[100];
    for(int i = 0; i < 100; i++) cin >> tab[i];
    int max = tab[0], c = 0;
    for(int i = 0; i < 100; i++)
    {
        if(max < tab[i])
        {
            max = tab[i];
            c++;
        }
    }
    cout << c;
    return 0;
}
