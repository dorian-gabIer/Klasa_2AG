#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, E, T, x, y, tab[100][100] = {0};
    cin >> V >> E >> T;
    for(int i = 0; i < E; i++)
    {
        cin >> x >> y;
        tab[x-1][y-1] = 1;
    }
    for(int i = 0; i < T; i++)
    {
        cin >> x >> y;
        if(tab[x-1][y-1] == 1) cout << "TAK";
        else cout << "NIE";
        cout << endl;
    }
    return 0;
}
