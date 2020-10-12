#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1)
    {
        int r, s, c, maxindex;
        cin >> r >> s >> c;
        if(r == 0 && s == 0 && c == 0) break;
        string imiona[28];
        int zliczanie[28];
        string temp, whole;
        for(int i = 0; i < c; i++) cin >> imiona[i];
        for(int i = 0; i < r; i++)
        {
            cin >> temp;
            whole += temp;
        }
        for(int j = 0; j < c; j++) zliczanie[j] = count(whole.begin(), whole.end(), (imiona[j])[0]);
        maxindex  = distance(zliczanie, max_element(zliczanie, zliczanie + c));
        cout << imiona[maxindex] << endl;
    }
    return 0;
}
