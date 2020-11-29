#include <bits/stdc++.h>
using namespace std;
struct info { int sum, item; };
void dynogo(int items[25][2], int amount[25], info mat[1005][2], int n, int m) // dynamiczny ogolny
{
    for(int i = 1; i <= m; i++) if(items[1][1] <= i) mat[i][0].sum = mat[i - items[1][1]][0].sum + items[1][0], mat[i][0].item = 1;
    for(int j = 2; j <= n; j++)
    {
        for(int i = 1; i <= m; i++)
        {
            mat[i][1].sum = mat[i][0].sum, mat[i][1].item = mat[i][0].item;
            if(items[j][1] <= i) mat[i][0].sum = mat[i - items[j][1]][0].sum + items[j][0], mat[i][0].item = j;
            if(mat[i][0].sum < mat[i][1].sum) mat[i][0].sum = mat[i][1].sum, mat[i][0].item = mat[i][1].item;
        }
    }
    cout << mat[m][0].sum << endl;
    while(m > 1)
    {
        if(!mat[m][0].sum) break;
        amount[mat[m][0].item]++, m -= items[mat[m][0].item][1];
    }
    for(int i = 1; i <= n; i++) if(amount[i]) cout << i << " " << amount[i] << endl;
}
int main()
{
    int n, m, items[25][2], amount[25] = {};
    info mat[1005][2];
    cin >> n >> m;
    for(int i = 0; i <= m; i++) mat[i][0].sum = 0, mat[i][0].item = 0;
    for(int i = 1; i <= n; i++) cin >> items[i][1];
    for(int i = 1; i <= n; i++) cin >> items[i][0];
    dynogo(items, amount, mat, n, m);
    return 0;
}
