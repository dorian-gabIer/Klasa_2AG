#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, mat[1005][1005], m = 1, z;
    cin >> x >> y;
    for (int i = 0; i < x; i++) for (int j = 0; j < y; j++) cin >> mat[i][j];
    for (int j = 0; j < y; j++)
    {
        z = 1;
        for (int i = 1; i < x; i++)
        {
            z++;
            if (mat[i][j] != mat[i - 1][j]) z = 1;
            if (z > m) m = z;
        }
    }
    cout << m;
    return 0;
}
