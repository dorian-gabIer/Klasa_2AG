#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, mat[35][35], pr1 = 0, pr2 = 0;
    cin >> N;
    for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> mat[i][j];
    for (int i = 0; i < N; i++)
    {
        pr1 += mat[i][i];
        pr2 += mat[i][N-1-i]; 
    }
    if(pr1 > pr2) cout << "LEWA";
    else if(pr1 == pr2) cout << "ROWNE";
    else cout << "PRAWA";
    return 0;
}
