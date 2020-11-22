#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[10][10];
    for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++) cin >> mat[i][j];
    int max = mat[0][0], maxi = 0, maxj = 0;
    for(int i = 0; i < 10; i++) for(int j = 0; j < 10; j++) if(max < mat[i][j]) max = mat[i][j], maxi = i, maxj = j;
    swap(maxi, maxj);
    cout << maxi << " " << maxj;
    return 0;
}
