#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, mat[35][35], max = -1, maxpos = 0;
    cin >> N;
    for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> mat[i][j];
    for (int i = 0; i < N; i++)
    {
        int temp = 0;
        for (int j = 0; j < N; j++) temp += mat[i][j];
        if(max < temp)
        {
            max = temp;
            maxpos = i;
        }
    }
    cout << maxpos+1;
    return 0;
}
