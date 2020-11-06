#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[10][10];
    for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) cin >> mat[i][j];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
