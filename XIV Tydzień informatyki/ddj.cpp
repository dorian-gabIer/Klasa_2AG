#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, min = 10000, d, dom;
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> dom;
        if(dom == 0 or dom > k) continue;
        else
        {
            d = abs((i-m+1)*10);
            if(d < min) min = d;
        }
    }
    cout << min;
    return 0;
}
