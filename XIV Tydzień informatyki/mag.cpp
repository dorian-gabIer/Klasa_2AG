#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int N;
    cin >> N;
    int mat[N][N];
    set <int> matpom;
    bool ismagic = true;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> mat[i][j];
            matpom.insert(mat[i][j]);
        }
    }
    int pr1 = 0, pr2 = 0;
    for (int i = 0; i < N; i++) pr1 += mat[i][i];
    for (int i = 0; i < N; i++) pr2 += mat[i][N-1-i]; 
    if(pr1 != pr2)  ismagic = false;
    for (int i = 0; i < N; i++)
    { 
          
        int magicrow = 0;      
        for (int j = 0; j < N; j++) magicrow += mat[i][j]; 
        if (magicrow != pr1) ismagic = false; 
    }
    for (int i = 0; i < N; i++)
    { 
        int magiccolumn = 0;      
        for (int j = 0; j < N; j++) magiccolumn += mat[j][i]; 
        if (pr1 != magiccolumn) ismagic = false; 
    }
    if(N*N != matpom.size()) ismagic = false;
    if (ismagic) cout << "YES";
    else cout << "NO";
    return 0;
}
