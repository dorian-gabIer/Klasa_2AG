#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos1, pos2, maxl = 0, l, mat[1000][2];
    for(int i = 0; i < 1000; i++) cin >> mat[i][0] >> mat[i][1];
    for(int i = 0; i < 1000; i++)
    {
        for(int j = i+1; j < 1000; j++)
        {
            l = sqrt(pow(mat[i][0] - mat[j][0], 2) + pow(mat[i][1] - mat[j][1], 2));
            if(l > maxl) pos1 = i, pos2 = j, maxl = l;
        }
    }
    if(mat[pos1][1] >= mat[pos2][1])
    {
        cout << mat[pos1][0] << " " << mat[pos1][1] << endl;
        cout << mat[pos2][0] << " " << mat[pos2][1] << endl;
    }
    else
    {
        cout << mat[pos2][0] << " " << mat[pos2][1] << endl;
        cout << mat[pos1][0] << " " << mat[pos1][1] << endl;
    }
    return 0;
}
