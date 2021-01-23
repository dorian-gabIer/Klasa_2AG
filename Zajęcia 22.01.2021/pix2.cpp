#include <bits/stdc++.h>
using namespace std;
bool symmetrical(int mat[1005][1005], int x, int y)
{
    for(int i = 0; i < y; i++) 
    {
        if(i == y - i) break;
        if(mat[x][i] != mat[x][y - i - 1]) return false;
    }
    return true;
}
int main()
{
    int x, y, mat[1005][1005], c = 0;
    cin >> x >> y;
    for (int i = 0; i < x; i++) for (int j = 0; j < y; j++) cin >> mat[i][j];
    for (int i = 0; i < x; i++) if(!symmetrical(mat, i, y)) c++;
    cout << c;
    return 0;
}
