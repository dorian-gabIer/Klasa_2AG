#include <bits/stdc++.h>
using namespace std;
int main()
{
    int V, E, x, y, tab[100][100] = {0};
    cin >> V >> E;
    for(int i = 0; i < E; i++)
    {
        cin >> x >> y;
        tab[x-1][y-1] = 1, tab[y-1][x-1] = 1;
    }
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++) cout << tab[i][j];
        cout << endl;
    }
    return 0;
}
