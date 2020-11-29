#include <bits/stdc++.h>
using namespace std;
struct info { int sum, item; };
void dyndec(int items[25][2], info mat[1005][25], int m, int n) // dynamiczny decyzyjny
{
    for(int i = 1; i <= m; i++) if(items[1][1] <= i) mat[i][1].sum = items[1][0], mat[i][1].item = 1;
    for(int j = 2; j <= n; j++)
    {
        for(int i = 1; i <= m; i++)
        {
            if(items[j][1] <= i) mat[i][j].sum = mat[i - items[j][1]][j - 1].sum + items[j][0], mat[i][j].item = 1;
            if(mat[i][j].sum < mat[i][j-1].sum) mat[i][j].sum = mat[i][j - 1].sum, mat[i][j].item = 0;
        }
    }
    cout << mat[m][n].sum << endl;
    for(n; n >= 1; n--)
    {
        if (mat[m][n].sum == 0) break;
        while(mat[m][n].item == 0) n--;
        cout << n << " ";
        m = m - items[n][1];
    }
}
int main()
{
    int n, m, items[25][2];
    info mat[1005][25];
    cin >> n >> m;
    for(int j = 0; j <= n; j++) for(int i = 0; i <= m; i++) mat[i][j].sum = 0, mat[i][j].item = 0;
    for(int i = 1; i <= n; i++) cin >> items[i][1];
    for(int i = 1; i <= n; i++) cin >> items[i][0];
    dyndec(items, mat, m, n);
    return 0;
}
