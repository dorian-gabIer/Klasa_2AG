#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mat[205], l = 0, c = 0, p;
    cin >> n;
    p = n - 1;
    int piv = floor(n/2);
    for(int i = 0; i < n; i++) cin >> mat[i];
    while(l >= 0)
    {
        if(mat[p] < mat[piv])
        {
            if(mat[l] > mat[piv])
            {
                cout << mat[l++] << " " << mat[p--] << endl;
                c++;
            }
            else l++;
        }
        else p--;
        if(c == 3) break;
    }
    return 0;
}
