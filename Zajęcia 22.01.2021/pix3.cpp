#include <bits/stdc++.h>
using namespace std;
bool neighbour(int mat[1005][1005], int currx, int curry, int x, int y)
{
    if(currx - 1 >= 0) if(abs(mat[currx][curry] - mat[currx - 1][curry]) > 128) return true;
    if(currx + 1 < x) if(abs(mat[currx][curry] - mat[currx + 1][curry]) > 128) return true;
    if(curry - 1 >= 0) if(abs(mat[currx][curry] - mat[currx][curry - 1]) > 128) return true;
    if(curry + 1 < y) if(abs(mat[currx][curry] - mat[currx][curry + 1]) > 128) return true;
    return false;
}
int main()
{
    int x, y, mat[1005][1005], c = 0;
    cin >> x >> y;
    for (int i = 0; i < x; i++) for (int j = 0; j < y; j++) cin >> mat[i][j];
    for (int i = 0; i < x; i++) for (int j = 0; j < y; j++) if(neighbour(mat, i, j, x, y)) c++;
    cout << c;
    return 0;
}
