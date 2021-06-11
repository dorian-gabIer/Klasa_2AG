#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> M[100];
    int n, x, y, c = 0, maxi = -1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        M[x].push_back(y);
        maxi = max(maxi, max(x, y));
    }
    for(int i = 1; i < maxi+1; i++)
    {
        cout << i << ": ";
        sort(M[i].begin(), M[i].end());
        for (auto ite = M[i].begin(); ite != M[i].end(); ++ite) cout << *ite << ",";
        cout << endl;
    }
    return 0;
}
