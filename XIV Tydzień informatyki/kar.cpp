#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int k[m] = {};
    queue<int>karty;
    for(int i = 1; i <= n; i++) karty.push(i);
    for(int i = 0; i < m; i++) cin >> k[i];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < k[i]; j++)
        {
            int temp = karty.front();
            karty.pop();
            karty.push(temp);
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << karty.front() << " ";
        karty.pop();
    }
    return 0;
}
