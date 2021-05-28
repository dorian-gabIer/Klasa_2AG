#include <bits/stdc++.h>
using namespace std;
float fx(float n, float *tab, float x)
{
    int s = 0, c = 0;
    for(float i = n; i >= 0; i--)
    {
        if(i != 0) s += (tab[c] * pow(x, i));
        else s += tab[c];
        c++;
    }
    return s;
}
int main()
{
    float n, tab[200], tab2[200], k = 0, B = -1, b = 0, a = 0;
    bool puf = false;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        cin >> tab[i];
        if(!puf && tab[i] < 0) k = i, puf = true;
    }
    for(int i = 0; i <= n; i++) if(abs(tab[i]) > B && tab[i] < 0) B = abs(tab[i]);
    if(k == 0) b = 0, a = 0;
    else 
    {
        b = 1 + pow((B/tab[0]), (1/k));
        for(int i = 0; i <= n; i++) 
        {
            if(i % 2 != 0) tab2[i] = -tab[i];
            else tab2[i] = tab[i];
        }
        B = -1, puf = false, k = 0;
        for(int i = 0; i <= n; i++) if(!puf && tab2[i] < 0) k = i, puf = true;
        for(int i = 0; i <= n; i++) if(abs(tab2[i]) > B && tab2[i] < 0) B = abs(tab2[i]);
        a = (1 + pow((B/tab2[0]), (1/k)))*(-1);
    }
    // [a, b] wyznaczone
    cout << "[a, b] = [" << a << ", " << b << ']' << endl;
    float last = fx(n, tab, a);
    float lastarg = a;
    set <float> wk;
    for(float i = a + 0.1; i <= b; i += 0.1)
    {
        int now = fx(n, tab, i);
        if((now > 0 && last < 0) || (now < 0 && last > 0))
        {
            float w = (round((((lastarg + i)/2.0) * 100)) / 100.0);
            if(wk.find(w) == wk.end()) cout << "Miejsce zerowe: x = " <<  w << endl;
            wk.insert(w);
        }
        if(now == 0)
        {
            float w = (round(i * 100) / 100.0);
            if(wk.find(w) == wk.end()) cout << "Miejsce zerowe: x = " <<  w << endl;
            wk.insert(w);
        }
        if(last == 0)
        {
            float w = (round(lastarg * 100) / 100.0);
            if(wk.find(w) == wk.end()) cout << "Miejsce zerowe: x = " <<  w << endl;
            wk.insert(w);
        }
        last = now, lastarg = i;
    }
    return 0;
}
